#include <stdio.h>

#define K 10
int fact(int);

int main(void)
{ 
    printf("The factorial of %d is: %d\n",K, fact(K));
}

int fact(int k){
    int i, f;
    for (f = 1; k > 0; k--)
        f *= k;
    return f;
}
