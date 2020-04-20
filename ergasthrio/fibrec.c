#include <stdio.h>

#define K 42

int fibrec(int);

int main(void)
{
    for(int i = 0; i < K; i++)
        printf("%d\n",fibrec(i));
    return 0;
}

int fibrec(int k) {
    int f;
    if (k < 2)
        return k;
    else{
        f = fibrec(k - 1)+fibrec(k - 2);
        return f;
    }
}

