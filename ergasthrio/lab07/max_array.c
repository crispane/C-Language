#include <stdio.h>

int max_array(int *A, int n){
  int max;
  max = A[0];
  for (int i = 1; i < n; i++){
    if ( max < A[i] )
      max = A[i];
  }
  return max;
}
