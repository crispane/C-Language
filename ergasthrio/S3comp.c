#include <stdio.h>
#include <math.h>

int main(){
    long i;
    double current, S3;
    int sign = -1;
    i = 1;
    S3 = 0;
    do {
        sign *= -1;
        current = sign * (1 / (double) i);
        S3 += current;
        i++;
    }while ((current > 1.0e-8) || (current < -1.0e-8));
    printf("After %8ld terms, we found S3 to be equal to %10.8f.\n", i-1, S3);
}
