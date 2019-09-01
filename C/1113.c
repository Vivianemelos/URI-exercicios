#include<stdio.h>
 
  int main() {
 
    int X=0, Y=1;
    while(X!=Y){
    scanf("%d",&X);
    scanf("%d",&Y);
    if(X<Y)
      printf("Crescente\n");
    if(X>Y)
      printf("Decrescente\n");
      
    }
  return 0;
  }
