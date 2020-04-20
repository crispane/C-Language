/* File: S7comp.c */

#include <stdio.h>
#include <math.h>

int  i = 1, sign = 1;
double current, sum = 0;

int main( void ) {
    do {
        current = (double) sign * pow ( 1.0 / (double) i, 3.0 );
        sum = sum + current;
        i += 2;
        sign *= -1;
    }while( current > 1.0e-15 );
    printf("After %d terms the sum is %f\n", 2*(i-2)-1, sum);
}
