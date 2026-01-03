#include <stdio.h>
#include <stdlib.h>


void function(int x){

    
	printf("%d\n",x);   

    if(x==1){
        return;
    }
	if(x%2==1){ 
        
         function(x*3+1);
	}
        
    if(x%2==0){
    	 
         function(x/2);
    }


}

       




int main()
{
    int j;
   scanf("%d",&  j);
   function(j);
}


