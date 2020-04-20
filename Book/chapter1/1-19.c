#include <stdio.h>

#define MAXLINE 1000

int mygetline(char line[], int maxline);
void myreverse(char line[]);

int main(void)
{
    char line[MAXLINE];

    while (mygetline(line, MAXLINE) > 0)
    {
        printf("%s", line);
        myreverse(line);
        printf("%s", line);
    }
    return 0;
}

int mygetline(char s[], int lim)
{
    int i, j, c;
    j = 0;
    for ( i = 1; (c = getchar()) != EOF && c != '\n'; ++i)
        if (i < lim -2){
            s[j] = c;
            ++j;
        }
    if (c == '\n') {
        s[j] = c;
        ++j;
        ++i;
    }
    s[j] = '\0';
    return i;
}

void myreverse(char s[])
{
    int i, j;
    char temp;
    i = j = 0;

    while (s[i] != '\0')
        ++i;
    --i;
    if (s[i] == '\n')
        --i;

    while (i > j){
        temp = s[j];
        s[j] = s[i];
        s[i] = temp;
        ++j;
        --i;
    }
}
