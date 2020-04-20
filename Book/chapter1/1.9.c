#include <stdio.h>
#define MAXLINE 1000 /* μέγιστο μήκος γραμμής εισόδου */

int getLine(char line[], int maxline);
void copy(char to[], char from[]);
/* εμφάνιση της μεγαλύτερης γραμμής εισόδου */

int main(void) {
    int len;                /* μήκος της τρέχουσας γραμμής */
    int max;                /* μεγαλύτερο μήκος ως τώρα */
    char line[MAXLINE];     /* τρέχουσα γραμμή εισόδου */
    char longest[MAXLINE];  /* η μεγαλύτερη γραμμή */

    max = 0;
    while ((len = getLine(line, MAXLINE)) > 0) {
        if(len > max) {
            max = len;
            copy(longest, line);
        }
    if (max > 0)             /* υπήρξε μια γραμμή */
        printf("%s", longest);
    }
    return 0;
}

/* getLine: διαβάζει μια γραμμή στο s, επιστρέφει το μήκος */
int getLine(char s[], int lim) {
    int c, i;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}
/* copy: αντιγράφει τo 'from' στο 'to', υποθέτει ότι το to είναι αρκετά μεγάλο */
void copy(char to[], char from[]) {
    int i;
    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}
