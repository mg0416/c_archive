#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a ;
    int b;
    int c;
    int d;



    printf("\n\n\n\n\n\n");
    for(a=10;a>=3;a--)
    {

        for (b=1; b<=a; b++)
        {
            printf("*");
        }
        for (b=0; b<20-2*a; b++)
        {



            printf(" ");
        }






        for (b=0; b<=a-1; b++)
        {
            printf("*");
        }
       printf("\n");

    }
    for( c=3; c<=10;c++)
    {
        for(d=1; d<=c;d++){


            printf("*");
        }
        printf("\n");
    }



    return 0;
}


    }
}return 0;

