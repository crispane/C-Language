/* File: capitalize.c */
#include <stdio.h>

int main(void)
{
    int ch;                         /* Be careful! Declare ch as int because if getchar() and EOF */
    ch = getchar();                 /* Read first character */
    while (ch != EOF) {             /* Go on if we didn't reach end of file */
        if (ch >= 'a' && ch <= 'z') /* If lower case letter */
            ch = ch - ('a' - 'A');  /* Move 'a' - 'A' positions in the ASCII table */
        else if (ch >= 'A' && ch <= 'Z') /* If upper case letter */
            ch = ch + ('a' - 'A');  /* Move 'a' - 'A' positions in the ASCII table */
        putchar(ch);
        ch = getchar();
    }
}
