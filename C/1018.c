#include <stdio.h>
 
int main() {
  
   int N, a, b, c, d, e, f, g;
   scanf("%d",&N);
   
   a = N/100;
   b = (N%100)/50;
   c = ((N%100)%50)/20;
   d = (((N%100)%50)%20)/10;
   e = ((((N%100)%50)%20)%10)/5;
   f = (((((N%100)%50)%20)%10)%5)/2;
   g = ((((((N%100)%50)%20)%10)%5)%2)/1;
   
   printf("%d\n",N);
   printf("%d nota(s) de R$ 100,00\n",a);
   printf("%d nota(s) de R$ 50,00\n",b); 
   printf("%d nota(s) de R$ 20,00\n",c);
   printf("%d nota(s) de R$ 10,00\n",d);
   printf("%d nota(s) de R$ 5,00\n",e);
   printf("%d nota(s) de R$ 2,00\n",f);
   printf("%d nota(s) de R$ 1,00\n",g);
 
    return 0;
}