#include <stdio.h>
/* Εμφάνιση εισόδου στην έξοδο με μία λέξη ανά γραμμή */

int main(void) {
    int c;

    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            printf("\n");
        }else
            putchar(c);
    }
}
