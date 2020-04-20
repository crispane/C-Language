#include <stdio.h>

int min_array(int *A, int n){
  int min;
  min = A[0];
  for (int i = 1; i < n; i++){
    if ( min > A[i] )
      min = A[i];
  }
  return min;
}
