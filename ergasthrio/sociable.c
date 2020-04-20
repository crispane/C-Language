/* File: sociable.c */

#include <stdio.h>
#include <math.h>
#define MAXNUM 1000000
#define MAXCYC 28

long number, sum, sum2, i, cycles, amicable, perfect, altogether;

int main() {
    amicable = perfect = altogether = 0;

    for(number = 2; number <= MAXNUM; number++)
    {
        sum = number;
        cycles = 0;
        do
        {
            sum2 = sum;
            sum = 1;
            for(i = 2; i <= (sqrt(sum2)); i++)
            {
                if(sum2 % i == 0 )
                {
                    sum += i;
                    if (i != sum2 / i)
                        sum += sum2 / i;
                }
            }
            cycles++;
        }while(sum != 1 && sum != 0 && sum != number && cycles <= MAXCYC && sum <= MAXNUM);

        if((sum == number) && !(cycles == 2 && sum2 > number))
        {
            altogether += 1;
            if(cycles == 1)
                perfect += 1;
            if(cycles == 2)
                amicable += 1;

            printf("cycle with length %ld: %ld ", cycles, number);
            sum = number;
            do
            {
                sum2 = sum;
                sum = 1;
                for(i = 2; i <= (sqrt(sum2)); i++)
                {
                    if(sum2 % i == 0)
                    {
                        sum += i;
                        if (i != sum2 / i)
                            sum += sum2 / i;
                    }
                }
                printf("%ld ", sum);
            }while(sum != 1 && sum != 0 && sum != number && cycles <= MAXCYC && sum <= MAXNUM);
            printf("\n");
        }

    }
    printf("all cycles: %ld\n", altogether);
    printf("perfect: %ld\n", perfect);
    printf("amicable: %ld\n", amicable);
    return(0);
}
