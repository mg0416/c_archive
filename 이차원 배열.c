#include <stdio.h>

int main()
{
  int arr[3][3];

  for(int a=0; a<=2; a++){  //가로;a
      for(int b=0; b<=2; b++){ //새로;b
      
          scanf("%d", arr[a][b]);
          
      }
     
  }
  ///입력 받음
  
  
  for(int c=0; c<=2; c++){
      
          if(c%2!=0){
              for(int l=2; l>=0; l--){
                  printf("%d",arr[c][l]);
              }
              
          }
          else{
              for(int p=0; p<=2; p++){
                  printf("%d",arr[c][p]);
              }
              
          }
          
          printf("\n");

      }
  
      
    return 0;
}
