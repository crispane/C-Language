#include <stdio.h>

#define MAXLINE 1000
#define LONGLINE 80

int mygetline(char line[], int maxline);

int main()
{
    int len;
    char line[MAXLINE];

    while ((len = mygetline(line, MAXLINE)) > 0)
        if  (len > LONGLINE)
            printf("%s", line);
    return 0;
}    

int mygetline(char s[], int lim){
    int c, i, j;
    j = 0;
    for (i = 0; (c = getchar()) != '\n' && c != EOF; ++i)
        if (i < lim - 2){
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
