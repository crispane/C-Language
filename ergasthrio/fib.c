#include <stdio.h>

#define K 42

void fib(int);

int main(void)
{
    fib(K);
    return 0;
}

void fib(int k) {
    int a1 = 0;
    int a2 = 1;
    int temp;
    printf("Printing the first %d fibonacci numbers.\n", K);
    printf("%d\n%d\n", a1, a2);
    for (; k > 1 ; k--){
        printf("%d\n", a1 + a2);
        temp = a1;
        a1 = a2;
        a2 = temp + a2;
    }
}

