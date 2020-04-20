#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

int countmines(int N, int M, int **p){
  int i, j;
  count = malloc((N+2) * sizeof(int*));
  for (i = 0; i < N+2; i++) {
    count[i] = malloc((M+2) * sizeof(int));
    if (count[i] == NULL)
      return -1;
  }

  for (i = 0; i < N+2; i++) {
    for (j = 0; j < M+2; j++) {
      *(count[i] + j) = 0;
    }
  }

  for (i = 0; i < N; i++) {
    for (j = 0; j < M; j++) {
      if (*(p[i] + j) == '*'){
        *(count[i+1] + j+1) = '*';
        for(int k= -1; k < 2;k++)
          for(int l= -1; l< 2;l++)
            if(*(count[i+1+k] + j+1+l) !='*')
              *(count[i+1+k] + j+1+l) += 1;
      }
    }
  }

  printf("\n");
  for (i = 1; i < N+1; i++) {
    for (j = 1; j < M+1; j++){
      if (*(count[i] + j) == '*')
        printf("*");
      else
        printf("%d", *(count[i] + j));
    }
    printf("\n");
  }
  return 0;
}
