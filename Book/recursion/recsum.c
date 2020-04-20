/* Write a recursive function that computes and returns the sum of all elements in an array, where the array and its size are given as parameters.

//return the sum of all elements in a[]
int findsum(int a[], int n)
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LIM 10

int findsum(int *, int);
int a[LIM];

int main(void)
{int sum; long curtime;

    curtime = time(NULL);
    srand((unsigned int) curtime);

    for (int i = 0; i < LIM; i++)
        a[i] = rand() % 1000 + 1;
    
    for (int i = 0; i < LIM; i++)
        printf("%d\n", a[i]);
    printf("The sum of the elements in the array is: %d\n", findsum(a, LIM));
    return 0;
}

int findsum(int *a, int n) {
    if (n <= 0)
        return 0;
    else
        return (findsum(a, n-1) + a[n-1]);
}

