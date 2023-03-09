#include <malloc.h>
#include <string.h>

char *add(const char *a, const char *b)
{
  int len1 = 0, len2 = 0, len;
  for (int i = 0, flag = 1; a[i] != '\0'; i++)
  {
    if (a[i] == '0' && flag)
      continue;
    else
      flag = 0;
    len1++;
  }
  for (int i = 0, flag = 1; b[i] != '\0'; i++)
  {
    if (b[i] == '0' && flag)
      continue;
    else
      flag = 0;
    len2++;
  }
  char *res;
  if (!len1 && !len2)
    return "0";
  if (len1 > len2)
    len = len1 + 2;
  else
    len = len2 + 2;
  res = malloc(len);
  int j = strlen(a) - 1, k = strlen(b) - 1, carry = 0, dig;
  for (int i = len - 2; i >= 0; i--)
  {
    dig = carry;
    if (j >= 0 && len1)
    {
      dig += (a[j--] - '0');
      len1--;  
    }
    if (k >= 0 && len2)
    {
      dig += (b[k--] - '0');
      len2--;
    }
    if (dig > 9)
    {
      dig -= 10;
      carry = 1;
    }
    else
      carry = 0;
    res[i] = dig + '0';
  }
  res[len - 1] = '\0';
  if (res[0] == '0')
  {
    char *res1 = malloc(len - 1);
    res1 = strcpy(res1, res + 1);
    free(res);
    return res1;
  }
  return res;
}