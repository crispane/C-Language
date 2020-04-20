#include <stdio.h>
#include <math.h>

int main() {
  long sign, i;
  double current, S1, pi;
  i = sign = 1;
  S1 = 0.0;
  do {
    current = sign * (1 / ((double) i * (double) i));
    S1 += current;
    i++;
    sign *= -1;
  }while (fabs(current) > 1.0e-15);
  pi = sqrt (12*S1);
  printf("Summed %8ld terms, S1 is %10.8f\n", i-1, pi);
}
