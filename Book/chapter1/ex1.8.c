#include <stdio.h>

/* Μέτρηση κενών, στηλοθετών και αλλαγών γραμμής */

int main(void) {
    int c, spaces, tabs, newlines;
    spaces = 0;
    tabs = 0;
    newlines = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ')
            ++spaces;
        else if (c == '\t')
            ++tabs;
        else if (c == '\n')
            ++newlines;
    }
    printf("spaces:%d\ntabs:%d\nnewlines:%d\n", spaces, tabs, newlines);
    return 0;
}
