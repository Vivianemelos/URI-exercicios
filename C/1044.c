#include <stdio.h>

  int main(){
    
    int segundo, primeiro; 	
    scanf("%d",&primeiro) ;
    scanf("%d",&segundo);
       if(segundo%primeiro && primeiro%segundo)
	      printf("Nao sao Multiplos\n");
       else 
          printf("Sao Multiplos\n");

   return 0;
}
