#include <stdio.h>
#define MAXLINE 1000

int getLine(char line[], int lim);
void reverseLine(char line[]);

int main(void)
{
    int len;
    char line[MAXLINE];

    while ((len = getLine(line, MAXLINE)) > 0) {
        reverseLine(line);
        printf("%s", line);
    }
    return 0;
}

int getLine(char s[], int lim)
{
    int c, i;
    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
        s[i] = c;
    }
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}


void reverseLine(char rline[])
{
  int i,j;
  char temp;

  for(i=0;rline[i]!='\0';++i)
    ;
  --i;
  if(rline[i]=='\n')
  --i;

  j = 0;

  while(j < i)
  {
    temp = rline[j];
    rline[j] = rline[i];
    rline[i] = temp;
    --i;
    ++j;
  }
}
