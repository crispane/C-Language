#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 10

int main(void)
{ int n, arr[10];
    long curtime;
    curtime = time(NULL);
    srand((unsigned int) curtime);
    for (int i = 0; i < MAX; i++)
        arr[i] = rand() % 1000 + 1;
    for (int i = 0; i < MAX; i++)
        printf("%d\n", arr[i]);

}
