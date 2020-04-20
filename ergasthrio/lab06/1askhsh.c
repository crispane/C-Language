/*file: main.c */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void)
{
  int n = getinteger(10);
  while (n != 1)
  {
    if (isodd(n))
      n = 3*n+1;
    else
      n = n / 2;
    printf("%d \n", n);
  }
}


