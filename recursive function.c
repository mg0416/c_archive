#include <stdio.h>
#include <stdlib.h>


int function(int x){



       if(x==1){
   if(x%2==1){
         x=function(x)*3+1;
         printf("%d",x);
       }
         printf("%d",x);
          break;
         }

       }




int main()
{
    int j;
   scanf("%d",&  j);
   function(j);

    return 0;
}



