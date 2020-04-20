#include <stdio.h>
#define LINES 6

int main()
{
    int spaces = LINES;
    for (int i = 1; i <= LINES; i++) {
        for (int k = 1; k < spaces; k++){
            putchar(' ');
        }

        int j = 1;
        for (j = 1; j <= (2*i-1);j++) {
            putchar('*');
        }
        printf("\n");
        spaces -= 1;
    }
}

