#include <stddef.h>
#include <stdio.h>
char *rot13(const char *src)
{
  size_t i, j;
  char arr1[] = "abcdefghijklmABCDEFGHIJKLMnopqrstuvwxyzNOPQRSTUVWXYZ";
  char arr2[] = "nopqrstuvwxyzNOPQRSTUVWXYZabcdefghijklmABCDEFGHIJKLM";
  char *result = malloc(strlen(src));
  for (i = 0; i < strlen(src); i++)
    {
    for (j = 0; j < 53; j++)
      {
        if (src[i] == arr1[j])
          {
          result[i] = arr2[j];
          break;
          }
      }
    if (j == 53)
      result[i] = src[i];
    }
    result[i] = src[i];
    return result;
}