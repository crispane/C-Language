#include <stdio.h>

int mystrlen(char *s) 
{
  for (int len = 0;;++len)
    if (s[len] == 0)
      return len;
}

int *mystrcat(char *s1, char *s2)
{
  while (*s1++);
  --s1;
  while(*s1++ = *s2++);

  }

