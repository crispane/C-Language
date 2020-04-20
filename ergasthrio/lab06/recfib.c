#include <stdio.h>
#include "getinteger.h"

int recfib(int n)
{
   if (n == 0)
      return 0;
   else if (n == 1)
      return 1;
   else
      return recfib(n-1)+recfib(n-2);
}

int main(void)
{
   int i, n;
   n = getinteger(10);
   for (i = 0 ; i <= n ; i++)
      printf("fib(%d) = %d\n", i, recfib(i));
   return 0;
}
