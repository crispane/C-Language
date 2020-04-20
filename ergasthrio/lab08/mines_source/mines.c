#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

int N,M,**p,**count;
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
