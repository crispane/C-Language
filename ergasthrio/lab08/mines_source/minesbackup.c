#include <stdio.h>
#include <stdlib.h>
int N, M, **p, **count;

int readarray(int N, int M)
{
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
}

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

int main(void)
{
  int d;
  N = getchar() - 48;
  d = getchar();
  M = getchar() - 48;
  readarray(N, M);
  countmines(N, M, p);
  for (int i = 0; i < N; i++)
    free(p[i]);
  free(p);
  for (int i = 0; i < N+2; i++)
    free(count[i]);
  free(count);
  return 0;
}
