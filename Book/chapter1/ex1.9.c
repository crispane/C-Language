#include <stdio.h>
/* Διόρθωση πολλαπλών κενών */

int main(void)
{
    int c, d;
    d = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' '&& c == d) {
                ;
        }else 
            putchar(c);
        d = c;
    }
    return 0;
}
