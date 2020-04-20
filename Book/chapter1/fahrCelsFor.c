#include <stdio.h>

#define LOWER   0   /* κάτω όριο του πίνακα */
#define UPPER   300 /* άνω όριο */

    int main() {
        int fahr;
        for(fahr = 300; fahr >= 0; fahr = fahr - 20)
            printf("%3d %6.1f\n", fahr, (5.0/9.0) * (fahr - 32));
    }
       
