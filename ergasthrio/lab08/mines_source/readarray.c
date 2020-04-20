#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

int readarray(int N, int M){
  int i, j, c;
  p = malloc(N * sizeof(int*));
  for (i = 0; i < N; i++) {
    p[i] = malloc(M * sizeof(int));
    if (p[i] == NULL)
      return -1;
  }

  for (i = 0; i < N; i++) {
    for (j = 0; j < M; j++) {
      c = getchar();
      if ((c != ' ') && (c != '\n'))
        *(p[i] + j) = c;
      else
        j--;
    }
  }

  for (i = 0; i < N; i++) {
    for (j = 0; j < M; j++)
      printf("%c", *(p[i] + j));
    printf("\n");
  }
  return 0;
}
