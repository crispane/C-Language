#include <stdio.h>

int sum_array(int *A, int n){
  int sum = 0;
  for (int i = 0; i < n; i++){
    sum += A[i];
  }
  return sum;
}
