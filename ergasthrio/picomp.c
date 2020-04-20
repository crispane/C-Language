/* File: picomp.c */
#include <stdio.h>
#include <math.h>

int main() {
  long i;
  double sum, current, pi;
  i = 1;
  sum = 0.0;
  do {
    current = 1 / (((double) i)*((double) i));
    sum = sum + current;
    i++;
  } while (current > 1.0e-15);
  pi = sqrt(6*sum);
  printf("Summed %9ld terms pi is %10.8f\n", i-1, pi);
}
