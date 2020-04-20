#include <stdio.h>

int mystrlen(char *s)
{
  int len = 0;
  while (*s++)
    len++;
  return len;
}

char *mystrcat(char *s1, char *s2)
{
  while (*s1++);
  --s1;
  while(*s1++ = *s2++);

}
