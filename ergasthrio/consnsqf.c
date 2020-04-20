/* File: consnsqf.c
 * Prints the first and K consecutive non square-free numbers.
 */

#include <stdio.h>
#include <math.h>

#define K 12

int main() {
    long chain, previous, number, square, quotient, i, j, limit;
    number = 1;
    chain = 0;
    previous = 1;

    while(chain < K)
    {
        square = 0;

        if(number % (2*2) == 0)
        {
            square = 1;
        }

        i = 3;
        limit = (K < 8)? number : (sqrt(number));
        while(((i*i) <= limit) && square == 0)
        {
            if (number % (i*i) == 0)
            {
                square = 1;

            }
            i += 2;
        }

        if (square == 1)
        {
            if(previous != number - 1)
                chain = 0;
            previous = number;
            chain++;
        }

        number++;
    }

    number -= K;
    for(j = 0; j < K; j++)
    {
        printf("%ld = " , number);
        quotient= number;
        while(quotient % 2 == 0)
        {
            if (quotient == number)
            {
                printf("2 ");
                quotient /= 2;
            }else{
                printf("x 2 ");
                quotient /= 2;
            }
        }


        for (i = 3; i <= sqrt(number); i += 2)
        {
            while (quotient % i == 0)
            {
                if (quotient == number)
                {
                    printf("%ld ", i);
                    quotient /= i;
                }else{
                    printf("x %ld ", i);
                    quotient /= i;
                }
            }
        }
        if (quotient > 2)
            printf("x %ld ", quotient);
        printf("\n");
        number++;
    }

    return(0);
}
