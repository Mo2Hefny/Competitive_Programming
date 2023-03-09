#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char *camel_case(const char *s)
{
  int j = 0;
  char *c;
  c = malloc(strlen(s));
  for (int i = 0; s[i]; i++)
    {
    if (s[i] == ' ')
      continue;
    else if (!i)
      c[j++] = s[i] - 32;
    else if (s[i - 1] == ' ')
      c[j++] = s[i] - 32;
    else
      c[j++] = s[i];
    }
  c[j] = '\0';
    return c;
}