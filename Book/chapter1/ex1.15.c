#include <stdio.h>

int fahrToCelsius(int, int);
/* συνάρτηση μετατροπής πίνακα θερμοκρασίας */

int main(void) {
    fahrToCelsius(-20,300);
    return 0;
}

int fahrToCelsius(int low, int high) {
    int fahr;
    for(fahr = high; fahr >= low; fahr = fahr - 20)
        printf("%3d  %6.1f\n", fahr, ((5.0/9.0)*(fahr-32)));
    return 0;
}
