#include <stdio.h>


int main(void)
{
    int DD, MM, YYYY, NMM, NYYYY, IDAY, DAY;

    printf("Enter year of birth: ");
    scanf("%d", &YYYY);
    printf("Enter month of birth: ");
    scanf("%d", &MM);
    printf("Enter day of birth: ");
    scanf("%d", &DD);

    if(MM <= 2)
    {
        NYYYY = YYYY - 1;
        NMM = 0;
    }else{
        NYYYY = YYYY;
        NMM = (4 * MM + 23) / 10;
    }
    IDAY = 365 * YYYY + DD + 31 * (MM - 1) - NMM + (NYYYY / 4) - ((3 / 4) * ((NYYYY / 100) + 1));

    if (IDAY % 7 == 1)
        printf("You were born on Saturday\n");
    if (IDAY % 7 == 2)
        printf("You were born on Sunday\n");
    if (IDAY % 7 == 3)
        printf("You were born on Monday\n");
    if (IDAY % 7 == 4)
        printf("You were born on Tuesday\n");
    if (IDAY % 7 == 5)
        printf("You were born on Wednesday\n");
    if (IDAY % 7 == 6)
        printf("You were born on Thursday\n");
    if (IDAY % 7 == 0)
        printf("You were born on Friday\n");
}
