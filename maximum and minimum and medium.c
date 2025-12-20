#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10];
    int f;
    int m;
    float k=0;

    for (int t = 0; t < 10; t++) {
        scanf("%d", &a[t]);
    }
          f = a[0];
            for (int c = 1; c < 10; c++) {
                     if (a[c] > f) {
                       f = a[c];
             }
      }
                   m=a[9];
             for(int j=8 ;j>=0 ;j--){

                if(a[j]<m){
                    m=a[j];
                }
             }

          for(int j=0; j<10; j++){
                 k=k+a[j];
      }

    printf("%d and %d and %f", f,m,k);


    return 0;
}

