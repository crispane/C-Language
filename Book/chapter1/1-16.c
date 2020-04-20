#include <stdio.h>
#define MAXLINE 1000

int mygetline(char line[], int maxline);
void copy(char to[], char from[]);

int main(void)
{
    int len, max;
    char line[MAXLINE];
    char longest[MAXLINE];

    max = 0;
    while ((len = mygetline(line, MAXLINE)) > 0) {
        printf("%d, %s", len, line);
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    }
    printf("\n");
    printf("\n");
    if (max > 0)
        printf("%s\n", longest);
    return 0;
}

int mygetline(char s[], int lim)
{
    int c, i, j;

    j=0;

    for (i=0; (c = getchar()) != EOF && c != '\n'; ++i)
        if (i < lim - 2){
            s[j] = c;
            ++j;
        }

    if (c =='\n') {
        s[j] = c;
        ++j;
        ++i;
    }

    s[j] ='\0';
    return i;
}

void copy (char to[], char from[])
{
    int i;
    i = 0;
    while ((to[i] = from[i]) != '\0')
            ++i;
}








