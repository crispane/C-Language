/* Write a recursive function that finds and returns the minimum element in an array, where the array and its size are given as parameters.

//return the minimum element in a[]
int findmin(int a[], int n)
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LIM 10

int arr[LIM];
int findmin(int *, int);
int minel;

int main(void)
{ int i, curtime, min;
    curtime = time(NULL);
    srand((unsigned int) curtime);

    for(int i = 0; i < LIM; i++)
        arr[i] = rand() % 1000 + 1;

    for (int i = 0; i < LIM; i++)
        printf("%d\n", arr[i]);

    minel = arr[LIM - 1];
    minel = findmin(arr, LIM);

    printf("The minimum number is: %d\n", minel);

    for (int i = 0; i < LIM; i++)
        printf("%d\n", arr[i]);
}

int findmin(int *array, int size){
    if (size == 1)
        return minel;
    else{
        if (array[size - 2] < minel)
            minel = array[size - 2];
        findmin(array, size - 1);

    }
}
