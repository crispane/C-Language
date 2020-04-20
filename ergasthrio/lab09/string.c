#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mystring.h"

int main(int argc, char **argv)
{
  char *strA = malloc (80 * sizeof(char*));
  char *strB = malloc (80 * sizeof(char*));
  for(int i = 0; i < 80;i++)
  {
    strA[i] = 0;
    strB[i] = 0;
  }
  *strcpy(strA, "This is a string.");
  *strcpy(strB, "This is another string.");
  int comp = strcmp(strA,strB);
  int lenA = mystrlen(strA);
  int lenB = strlen(strB);
  printf("strA: ");
  int i = 0;
  while (strA[i]) {
    printf("%c",strA[i]);
    i++;
  }
  printf("\n");
  printf("lenA: %d\n", lenA);
  printf("strB: ");
  i = 0;
  while (strB[i]) {
    printf("%c",strB[i]);
    i++;
  }
  printf("\n");
  printf("lenB: %d\n", lenB);

  printf("comp = %d\n", comp);
  if (comp == 0){
    printf("strA is equal to strB.\n");
  }else if (comp > 0){
    printf("strA is greater than strB.\n");
  }else if (comp < 0){
    printf("strB is greater than strA.\n");
  }

  mystrcat(strA, strB);
  printf("%s\n",strA);

  strcat(strB, strA);
  printf("%s\n",strB);

  char *p;
  p = strtok(strB, ",.");
  while (p != NULL)
  {
    printf("%s\n", p);
    p = strtok(NULL, ",.");
  }
}
