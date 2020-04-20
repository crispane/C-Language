#include <stdio.h>
#include <math.h>

int main() {
  long i, j;
  double S5, current;
  i = 2;
  j = 1;
  S5 = 0;
  do {
    current = 1 / ((double) (i * (i + 1) * (i + 2)));
    if (j % 2 != 0) {
      S5 = S5 + current;
    }else{
      S5 = S5 - current;
    }
    i=i+2;
    j++;
  }while(current > 1.0e-15);
  printf("After %8ld terms, S5 = %10.8f.\n", i-2, S5);
}
