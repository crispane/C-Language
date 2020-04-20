#include <stdio.h>

#define K 10

int factrec(int);

int main(void)
{
    printf("The factorial of %d is %d\n", K, factrec(K));
}

int factrec(int k){
    if (!k)
        return 1;
    else 
        return k*factrec(k-1);
}

