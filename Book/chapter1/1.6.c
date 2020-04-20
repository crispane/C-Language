#include <stdio.h>
/* μέτρηση ψηφίων, λευκών διαστημάτων, και άλλων χαρακτήρων */

int main(void) {
    int c, i, nwhite, nother;
    int ndigit[10];

    nwhite = nother = 0;
    for (i = 0; i < 10; ++i)
        ndigit[i] = 0;

    while ((c = getchar()) != EOF)
        if (c >= '0' && c <= '9')
            ++ndigit[c-'0'];
        else if (c == ' '|| c == '\n' || c== '\t')
            ++nwhite;
        else
            ++nother;

    printf ( "ψηφία = " );
    for (i=0; i <10; ++i)
        printf(" %d", ndigit[i]);

    printf("\nλευκά διαστήματα = %d \
            \nάλλοι χαρακτήρες = %d\n", nwhite, nother);
}
