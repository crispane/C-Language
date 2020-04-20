#include <stdio.h>

#define MAXCOL 10
#define TAB 8

char line[MAXCOL+1];

int foldline(char line[], int maxcol)
    //int main()
{
    int i, c;

    for (i = 0; (c = getchar()) != EOF && c != '\n'; ++i) {
        for ( ; c == ' ' || c == '\t'; ++i)
            ;
        int spaces = i;
        while (i < MAXCOL + spaces)
            ;
        for ( ; c == ' ' || c == '\t'; --i)
            ;
        ++i;
        line[i] = '\0';
        ++i;
        line[i] = '\n';
    }
    return i;
}

int main(void) {
    char s[MAXCOL+1];
    while (foldline(s, MAXCOL) > 0)
        printf("%s", s);
    return 0;
}
