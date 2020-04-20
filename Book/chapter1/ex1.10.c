#include <stdio.h>

/* Αντιγραφή εισόδου στην έξοδο και αντικατάσταση στηλοθέτη με \t, οπισθοδρόμησης με \b, ανάποδης καθέτου με \\ */

int main(void) {
    int c;

    while ((c = getchar()) != EOF) {
        if (c == '\t'){
            printf("\\t");
        }else if (c == '\b'){
            printf("\\b");
        }else if (c == '\\'){
           printf("\\\\"); 
        }else
            putchar(c);
    }
    return 0;
}
