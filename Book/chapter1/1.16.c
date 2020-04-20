#include <stdio.h>
#define MAXLINE 200 /* μέγιστο μήκος γραμμής εισόδου */

int getLine(char s[], int lim);
void copy(char to[], char from[]);
/* εμφάνιση της μεγαλύτερης γραμμής εισόδου */

int main(void)
{
    int len, max, prevmax, getmore; 
    char line[MAXLINE];
    char longest[MAXLINE];
    char temp[MAXLINE];

    max = prevmax = getmore = 0;
    while ((len = getLine(line, MAXLINE)) > 0) {
        if (line[len - 1] != '\n') {
            if (getmore == 0)
               copy(temp, line);
            prevmax += len;
            if (max < prevmax)
                max = prevmax;
            getmore = 1;
        } else {
            if (getmore == 1) {
                if (max < prevmax + len) {
                    max = prevmax + len;
                    copy(longest, temp);
                    longest[MAXLINE - 2] = '\n';
                }
                getmore = 0;
            }
            else if(max < len){
                max = len;
                copy(longest, line);
            }
            prevmax = 0;
        }
        if (max > 0) /* υπήρξε μια γραμμή */
            printf("%s", longest);
            printf("len = %d\n", max);
    }
    return 0;
}

/* getLine: διαβάζει μια γραμμή στο s, επιστρέφει το μήκος */
int getLine(char s[], int lim)
{
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
void copy(char to[], char from[])
{
    int i;
    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}
