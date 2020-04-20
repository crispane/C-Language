#include <stdio.h>
#define LIM 6

int is_palindrome(int *, int);

int main(void)
{int isit;
    int a[LIM] = {5, 3, 4, 4, 3, 2};
    isit = is_palindrome(a, LIM);
    if (!isit)
        printf("It is not!\n");
    else
        printf("It is!\n");
}

int is_palindrome(int *a, int n){
    if (n <= LIM / 2)
        return 1;
    else
        return ((a[n - 1] == a[LIM - n]) && is_palindrome(a, n - 1));
}


