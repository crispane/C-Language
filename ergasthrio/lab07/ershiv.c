#include <stdio.h>
#define SIZE 50

int main(void){
  int i, j;
    int A[SIZE];
  for(i = 2; i <= SIZE -1; i++){
    A[i] = 1;
  }
  for(i = 2; i <= SIZE -1; i++){
    if (A[i] != 0){
      for(j = 2*i; j <= SIZE-1; j+=i)
        A[j] = 0;
    }
  }
  for (i = 2; i <= SIZE - 1; i++){
    if (A[i] == 1)
      printf("Ο %d είναι πρώτος.\n", i);
  }
}
