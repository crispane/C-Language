/* File: gcdlcm.c */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define COMPUTATIONS 8
#define MAXNUMB 1000

int main()
{
    int i, m, n, large, small, gcd, rem;
    long curtime, lcm;
    curtime = time(NULL);
    printf("Current time is %ld\n\n", curtime);
    srand ((unsigned int) curtime);
    for (i = 0; i< COMPUTATIONS; i++) {
        m = rand() % MAXNUMB + 1;
        n = rand() % MAXNUMB + 1;
        if (m > n) {
            large = m;
            small = n;
        }else {
            large = n;
            small = m;
        }
        while (small) {
            rem = large % small;
            large = small;
            small = rem;
        }
        gcd = large;
        lcm = (m*n) / gcd;
        printf("GCD(%3d,%3d) = %2d  LCM(%3d,%3d) = %6ld\n", m, n, gcd, m, n, lcm);
    }

}
