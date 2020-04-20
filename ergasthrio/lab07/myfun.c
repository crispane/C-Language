#include <stdio.h>

void goodf(int x, int y, int *sum, int *diff)
{
    *sum = x + y;
    *diff = x - y;
}
