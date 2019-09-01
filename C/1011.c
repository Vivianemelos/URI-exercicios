#include<stdio.h>
#include<math.h>

 int main(){
     
   int R;
   double pi = 3.14159;
   double vol;
   scanf("%d", &R);

   vol = (4.0/3) * pi * pow(R,3);
   printf("VOLUME = %.3lf\n", vol);
 
 return 0;
}