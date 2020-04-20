/*S4comp.c*/

#include <stdio.h>
#include <stdio.h>

int main () {
  long i;
  double current, S4;
  i = 1;
  S4 = 0;
  do{
    if( i % 2 != 0) {
      current = 1 / ((double) ((i + 2) * i));
      S4 = S4 + current;
    }
    i++;
  }while (current > 1.0e-15);
  printf("After %8ld terms, S4 = %10.8f.\n", i-1, S4);
}
