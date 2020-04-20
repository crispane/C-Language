#include <stdio.h>
#define LIM 7

int is_palindrome(int *, int);

int main(void)
{int isit;
    int a[LIM] = {4, 2, 3, 4, 3, 2, 1};
    isit = is_palindrome(a, LIM);
    if (!isit)
        printf("It is not!\n");
    else
        printf("It is!\n");
}

int is_palindrome(int *a, int n){
    if (LIM - n >= n)
        return 1;
    if (a[n - 1] == a[LIM - n]){
        return is_palindrome(a, n-1);
    }else{
        return 0;
    }
}


