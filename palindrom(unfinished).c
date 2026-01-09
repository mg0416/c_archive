#include <stdio.h>


int main(){
   int s[5];
    for(int a=0; a<=4; a++){
        scanf("%d",&s[a]);
    }
    for(int b=0; b<=1; b++){
        if(s[b]==s[4-b]){
             printf("1");
              }
            else if(s[b]!=s[4-b]){
             printf("0");
              }
           }
        }
    
    
    
    
    
    







