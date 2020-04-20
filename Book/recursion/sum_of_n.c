/* Write a recursive function that computes the sum of all numbers from 1 to n, where n is given as parameter.

//return the sum 1+ 2+ 3+ ...+ n
int sum(int n)
*/

#include <stdio.h>

#define N 10

int recsum(int);

int main(void)
{ int rs;
    rs = recsum(N);
    printf("The recursive sum of %d numbers is: %d",N ,rs);
}

int recsum(int n){
    if (n == 1)
        return 1;
    else
        return n+recsum(n-1);

}
