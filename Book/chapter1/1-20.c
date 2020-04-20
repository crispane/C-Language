#include <stdio.h>

#define TAB 8
#define MAXCHAR 100000

int main(void)
{
    char s[MAXCHAR];
    int i, c, spaces;
    for (i = 0; (c = getchar()) != EOF; ++i)
        if (c == '\t'){
            if ( i >= TAB){
                spaces = i%TAB;
                for (int j = 0; j < spaces; ++j){
                    s[i] = '#';
                    ++i;
                }
            }else{
                spaces = TAB%i;
                for (int j = 0; j < spaces; ++j){
                    s[i] = '#';
                    ++i;
                }
            }
        }else
            s[i] = c;
    printf("%s", s);
    return 0;
}

