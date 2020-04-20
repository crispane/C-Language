#include <stdio.h>
/* εμφάνιση πίνακα Φαρενάιτ-Κελσίου
 για θερμοκρασίες Φαρενάιτ = 0,20, ...,300
 Εκδοχή με κινητή υποδιαστολή */

int main()
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0; /*κάτω όριο του πίνακα θερμοκρασιών*/
	upper = 300; /*άνω όριο*/
	step = 20; /* μέγεθος βήματος */

	fahr = lower;
  printf("Fahrenheit Celcius\n");
printf("******************\n");
	while (fahr <= upper) {
		celsius = (5.0/9.0) * (fahr -32.0);
		printf("%3.0f \t   %6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
}
