#include <stdio.h>

int power(int, int);

int main (void)
{
    return power(2,3);
}

int power(int a, int b){
    int p = 1;
    for (; b > 0; b--)
        p *= a;
    return p;
}
