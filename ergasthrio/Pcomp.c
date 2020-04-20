#include <stdio.h>
#include <math.h>

int main() {
  long i, j;
  double current, product;
  i = j = product = 1;
  do {
    if( i % 2 != 0) {
      current =  ((double) (i+1) / (double) i);
    }else{
      current =  ((double) i / (double) (i+1));
    }
    product = product * current;
    i++;
  }while ( i < 1.0e+10);
  product *= 2; 
  printf("After %8ld terms, P = %10.8f.\n", i, product);
}
