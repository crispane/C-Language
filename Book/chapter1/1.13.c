#include <stdio.h>

/* Ιστόγραμμα με μήκη λέξεων εισόδου */

#define HIST '|'
#define MAXLENGTH 100

int main(void)
{
    int c, wordLength, maxLength, maxWords;
    int wordArray[MAXLENGTH];

    /* initialize */
    wordLength = maxLength = maxWords = 0;
    for (int i = 0; i < 100; ++i)
        wordArray[i] = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t' || c == '\n') {
            if (wordLength > 0) {
                if (maxLength < wordLength)
                    maxLength = wordLength;
                ++wordArray[wordLength - 1];
            }
            wordLength = 0;
        } else
            ++wordLength;
    }

    /* Οριζόντιο ιστόγραμμα */
    for (int j = 0; j < 20; ++j) {
        for (int i = 0; i < wordArray[j]; ++i)
            putchar(HIST);
        putchar('\n');
    }
    /* κάθετο ιστόγραμμα */
    for (int i = 0; i < maxLength; ++i)
        if (wordArray[i] > maxWords)
            maxWords = wordArray[i];

    printf("%3.0d %3.0d \n", maxLength, maxWords);

    for (int i = 0; i < 30; ++i)
        printf("%3.0d", i + 1);
    printf("\n");

    for (int j = 0; j < maxWords; ++j) {
        for (int i = 0; i < 30; ++i)
            if (wordArray[i] >= maxWords - j) {
                printf("  |");
            } else
                printf("   ");
        putchar('\n');
    }

    return 0;
}
