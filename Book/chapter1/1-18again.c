#include <stdio.h>

#define MAXLINE 1000

int mygetline(char line[], int lim);
int myremove(char line[]);

int main(void)
{
    char line[MAXLINE];

    while (mygetline(line, MAXLINE) > 0)
        if (myremove(line) > 0)
            printf("%s", line);
    return 0;
}

int mygetline(char line[], int lim)
{
    int i, j, c;
    j = 0;

    for (i = 0; (c = getchar()) != EOF && c != '\n'; ++i)
        if (i < lim - 2){
            line[j] = c;
            ++j;
        }

    if (c == '\n'){
        line[j] = c;
        ++j;
        ++i;
    }

    line[j] = '\0';
    return i;
}

int myremove(char line[]){
    int i = 0;
    while (line[i] != '\n')
        ++i;
    --i;
    while (line[i] == ' ' || line[i] == '\t')
        --i;
    if (i >= 0){
        ++i;
        line[i] = '\n';
        ++i;
        line[i] = '\0';
    }
    return i;
}

