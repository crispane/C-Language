/* File: recfact.c */
#include <stdio.h>
#define MAXN 13                                 /* Compute factorials up to MAXN */

int recfact(int);                               /* Prototype of recfact */

int main(void)
{
    int n;
    for (n = 0; n <= MAXN; n++)
        printf("%2d! = %d\n", n, recfact(n));   /* print result */
    return 0;
}

int recfact(int n)
{
    if (!n)
        return 1;                               /* If n == 0 */
    else                                        /* 0! = 1 */
        return n*recfact(n-1);                  /* n! = n * (n-1)! */
}
