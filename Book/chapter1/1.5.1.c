#include <stdio.h>

/* Αντιγραφή της εισόδου στην έξοδο, πρώτη εκδοχή */

int main(void){
    int c;
    printf("the value of EOF is:\t%d\n", EOF);

    while ((c=getchar()) != EOF) {
        putchar(c);
    }
    return 0;
} 

