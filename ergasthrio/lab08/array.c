#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int size, c, *p, sum;
  double avg;
  printf("Enter size of array: ");
  c = getchar();
  size = c - 48;
  printf("%d\n", size);
  p = malloc(size * sizeof(int));
  if (p == NULL) {
    printf("Sorry, cannot allocate memory\n");
    return -1;
  }
  c = getchar();
  int counter;
  int i;
  i = sum = 0;
  counter = 0;
  while ((c != EOF)&&(i<size)){
    counter++;
    if (counter < 2){
      c = getchar();
      continue;
    }
    if (c != ' '){
      p[i] =c - 48;
      sum += p[i];
      i++;
    }
    c = getchar();
  }
  printf("\n");
  for (int i = 0; i < size; i++){
    printf("%d\t",p[i]);
  }
  free(p);
  printf("\n");
  avg = sum / size;
  printf("The average is %f", avg);
  printf("\n");
  return 0;
}
