#include <stdio.h>
 
int main() {
  
  float n;
  int i, pos = 0;
  for(i=1;i<=6;i++){
    scanf("%f",&n);
	  
    if(n>0)pos++;
  
  }
	printf("%d valores positivos\n",pos);
    return 0;
}