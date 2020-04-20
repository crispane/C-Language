#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(void) {
    double a, b, c, curtime, det, s1, s2;
    curtime = time(NULL);
    printf("Current time is: %f\n\n", curtime);
    srand((unsigned int)curtime);
    double random2()
    {
        return ((double) rand() / (double) RAND_MAX);
    }
    a = random2();
    b = random2();
    c = random2();
    printf("a = %f, b = %f, c = %f\n", a, b, c);
    det = b*b - 4*a*c;
    if (det < 0)
    {
        printf("s1 = %.3f + %.3fi, s2 = %.3f - %.3fi\n", -b/(2*a), sqrt(-det)/2*a, -b/(2*a), sqrt(-det)/2*a);
    }else
    {
        s1 = (-b + sqrt(det)) / 2*a;
        s2 = (-b - sqrt(det)) / 2*a;
        printf("s1 = %.3f, s2 = %.3f\n", s1, s2);
    }
}
