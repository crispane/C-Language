#include <stdio.h>
void goodf();

int main(void)
{
    int a, b, ath, diaf;
    ath = diaf = 0;
    printf("Give me a number: ");
    scanf("%d", &a);
    printf("Give me another :");
    scanf("%d", &b);
    goodf(a, b, &ath, &diaf);
    printf("sum:%d, diff:%d \n", ath, diaf);
}
