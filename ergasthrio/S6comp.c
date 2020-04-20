#include <stdio.h>
#include <math.h>

int main() {
	long i;
	double S6, current, pi;
	i = 1;
	int POWER = 4;
	S6 = 0;
	do {
		current = 1 / pow((double) i, (double) POWER);
		S6 = S6 + current;
		i++;
	}while (current > 1.0e-15);
        pi = sqrt(sqrt(90*S6));
	printf("Summed %8ld terms, S6 is %10.8f\n", i - 1, pi);
}
