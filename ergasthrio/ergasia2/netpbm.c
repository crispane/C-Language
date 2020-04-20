#include <stdio.h>

int ppm3topgm2();
int magicnumber;

int main(void)
{
    int ch, i, j, k, spaceflag;
    ch = getchar();
    i = j = k = spaceflag = 0;

    while (ch != EOF) {
        if ((i == 0) && (ch != 'P')) {
            printf("Input Error!");
            break;
        }
        if ((i == 1) && (ch != '2') && (ch != '3') && (ch != '5') && (ch != '6')) {
            printf("Input Error!");
            break;
        }
        while (k < 4) {
            while (ch == ' ' || ch == '\t' || ch == '\n') {
                if (spaceflag != 1) {
                    k += 1;
                    spaceflag == 1;
                    putchar(ch);
                    continue;
                } else
                    continue;
            }
            if (i == 1) {
                magicnumber = putchar(ch);
                putchar(ch - 1);
            } else
                putchar(ch);
        }

        switch (magicnumber) {
        case 2:
            break;
        case 3:
            ppm3topgm2();
            break;
        case 5:
            break;
        case 6:
            break;
        default:
            break;
        }

        i += 1;
    }

    int ppm3topgm2()
    {
        int l, a1, b1, c1, r, g, b, x;
        if (ch != ' ') {
            if (l == 0) {
                a1 = putchar(ch);
                x = a1;
                l += 1;
            } else if (l == 1) {
                b1 = putchar(ch);
                x = a1 * 10 + b;
                l += 1;
            } else if (l == 2) {
                c1 = putchar(ch);
                x = a1 * 100 + b1 * 10 + c1;
                l += 1;
            }

        } else {
            if (l == 1) {
                r = x;
                l = 0;
            } else if (l == 2) {
                g = x;
                l = 0;
            } else if (l == 3) {
                b = x;
                l = 0;
            }
        }
        int pixel = 0.299 * r + 0.587 * g + 0.114 * b;
        printf("%d ", pixel);
        return 0;
    }
