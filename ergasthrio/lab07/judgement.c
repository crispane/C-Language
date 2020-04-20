#include <stdio.h>
#define SIZE 10
int max_array(int *A, int n);
int min_array(int *A, int n);
int sum_array(int *A, int n);
void print_array(int *A, int n);
int A[SIZE];
int max, min, sum, score;

int main(void){
  for (int i = 0; i < SIZE; i++){
    printf("Enter score No. %d: ", i);
    scanf("%d", &A[i]);
    printf("\n");
  }
  max = max_array(A, SIZE);
  printf("MAX: %d\n", max);
  min = min_array(A, SIZE);
  printf("MIN: %d\n", min);
  sum = sum_array(A, SIZE);
  printf("SUM: %d\n", sum);

  score = (sum - max - min) / (SIZE - 2); 
  printf("The scores are: \n");
  print_array(A, SIZE);
  printf("Total score: \n");
  printf("%d\n", score);
}
