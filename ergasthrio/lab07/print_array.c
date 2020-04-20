#include <stdio.h>

void print_array(int *A, int n){
  for (int i = 0; i < n; i++)
    printf("%d\t", A[i]);
  printf("\n");
}
