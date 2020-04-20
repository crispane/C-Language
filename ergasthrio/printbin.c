#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define COMPUTATIONS 20

void printbin(int n)
{
   if (n != 0) {
      printbin(n/2);
      printf("%d", n%2);
   }
}

int main(void)
{
   int i, n;
   long curtime;
   curtime = time(NULL);
   srand((unsigned int) curtime);
   for (i = 0 ; i < COMPUTATIONS ; i++) {
      n = rand();
      printf("%10d --> ", n);
      if (n != 0)
         printbin(n);
      else
         printf("0");
      printf("\n");
   }
   return 0;
}

