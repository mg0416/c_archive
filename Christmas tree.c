#include <stdio.h>
#include <stdlib.h>

int main() {
    int h ;
    scanf("%d",&h);

    printf("Merry Christmas!\n");


    for (int i = 1; i <= h; i++) {
           for (int j = 0; j < h - i; j++) {
                   printf(" ");
   }
               for (int k = 0; k < 2 * i - 1; k++) {
                     printf("*");
}
                    printf("\n");
    }

    return 0;
}

