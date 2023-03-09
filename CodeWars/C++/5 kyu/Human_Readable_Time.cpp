#include <stdlib.h>
char *human_readable_time (unsigned seconds, char *time)
{
  char* time_string=malloc(strlen(time) + 1);
  strcpy(time_string,"00:00:00");
  int set,j,i,dom;
  int k = 1;
  for (i = 2; i >= 0; i--)
  {
    dom = 1;
    for (j = i; j > 0; j--)
    {
      dom *= 60;
    }
    set = seconds / dom;
    seconds %=dom;
    for (j = k; set > 0 && j < 9; j--)
    {
      time_string[j] = (set % 10) + '0';
      set /= 10;
    }
    k +=3;
  }
  return time_string;
}