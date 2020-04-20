#include <stdio.h>
/* ιστόγραμμα αριθμού χαρακτήρων εισόδου */

int main(void)
{

    int c, letter, count;
    int charFrequency[25];

    /* initialization */
    letter = count =0;
    for (int i = 0; i < 26; ++i)
        charFrequency[i] = 0;

    /* reading file */
    while ((c = getchar()) != EOF) {
        if (c >= 97 && c <= 122)
            ++charFrequency[c - 97];
    }

    /* printing histogram */
    printf("\n");
    for (int i = 0; i < 26; ++i) {
        letter = 97 + i;
        putchar(letter);
        putchar(' ');
        for (int j = 0; j < charFrequency[i]; ++j) {
            ++count;
            printf("*");
        }
        printf("%d", count);
        count = 0;
        putchar('\n');
    }
}
