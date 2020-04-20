#include <stdio.h>
#include <math.h>

int main() {
  long i;
  double current, S2;
  int sign = -1;
  i = 1;
  S2 = 0;
  do {
    sign *= -1;
    current = sign * (1 / (double) i);
    i++;
    S2 += current;
  }while ((current > 1.0e-6) || (current < -1.0e-6));
  printf("The sum of %8ld terms is %10.8f\n", i-1, S2);
}
