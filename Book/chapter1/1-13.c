/* K&R 1-13: horizontal histogram of lengths of words */


#include<stdio.h>

#define OUT 0
#define IN 1
#define MAXWORD 11
#define MAXHIST 15

int main(void)
{
  int i, c, nc, ovflow, state, maxvalue, len;
  int wl[MAXWORD];

  nc = ovflow = 0;
  state = OUT;

  for (i = 0; i < MAXWORD; ++i)
    wl[i] = 0;

  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\t' || c == '\n'){
      state == OUT;
      if (nc > 0)
        if (nc < MAXWORD)
          ++wl[nc];
        else
          ++ovflow;
      nc = 0;
    }
    else if (state == OUT){
      state = IN;
      nc = 1;
    }
    else
      ++nc;
  }

  maxvalue = 0;
  for (i = 0; i < MAXWORD; ++i)
    if (wl[i] > maxvalue)
      maxvalue = wl[i];

  for (i = 1; i < MAXWORD; ++i){
    printf("%5d - %5d : ", i, wl[i]);
    if (wl[i] > 0){
      len = wl[i] * MAXHIST / maxvalue;
      if (len  <= 0)
        len = 1;
    } else
      len = 0;

    while (len > 0) {
      putchar ('*');
      --len;
    }
    putchar('\n');
  }

  if(ovflow > 0)
    printf("There are %d words >= %d\n", ovflow, MAXWORD);
}
