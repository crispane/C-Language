#include <stdio.h>

/* Μετατροπή από κελσίου σε Φαρενάιτ */

int main() {

  float celsius, fahr;
  int lower, upper, step;
  lower = -20;
  upper = 100;
  step = 10;

  celsius = lower;

  printf("Celsius Fahrenheit\n");
  printf("******************\n");
  while (celsius<=upper) {
    fahr = (9.0/5.0) * celsius - 32.0;
    printf("%3.0f \t %6.1f\n", celsius, fahr);
    celsius = celsius + step;
  }

}
