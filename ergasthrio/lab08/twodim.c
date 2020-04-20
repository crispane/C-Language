#include <stdio.h>
#define WIDTH 6
#define DEPTH 10

int main()
{
  int i, j, k = 0;
  int A[WIDTH][DEPTH];
  for(i = 0; i < WIDTH; i++){
    for(j = 0; j < DEPTH; j++){
      //A[i][j] = i*(5-i)+j*(9-j);
      A[i][j] = k;
      k++;
    }
  }

  printf("Αρχικός πίνακας:\n");
  for(i = 0; i < WIDTH; i++){
    for(j = 0; j < DEPTH; j++)
      printf("%d\t", A[i][j]);
    printf("\n");
  }
  printf("\n");
  printf("Ανάστροφος πίνακας:\n");
  printf("\n");
  for(i = 0; i < DEPTH; i++){
    for(j = 0; j < WIDTH; j++)
      printf("%d\t", A[j][i]);
    printf("\n");
  }
  printf("\n");
  printf("Αντίστροφος πίνακας:\n");
  printf("\n");
  for(i = 0; i < WIDTH; i++){
    for(j = DEPTH-1; j > -1; j--)
      printf("%d\t", A[i][j]);
    printf("\n");
  }
  printf("\n");
  printf("Φιδοειδής πίνακας:\n");
  printf("\n");
  for(i = 0; i < WIDTH; i++){
    if(i%2 == 0)
      for(j = 0; j < DEPTH; j++)
        printf("%d\t", A[i][j]);
    else
      for(j = DEPTH-1; j > -1; j--)
        printf("%d\t", A[i][j]);
    //printf("\n");
  }
  printf("\n");

  return 0;
}
