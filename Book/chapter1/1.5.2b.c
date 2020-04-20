#include <stdio.h>

/* Μέτρηση χαρακτήρων στην είσοδο, δεύτερη εκδοχή */

int main(void)
{
    double nc;
    for (nc = 0; getchar() != EOF; ++nc)
        ;
    printf("%.0f\n",nc);
}
