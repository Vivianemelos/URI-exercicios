#include<stdio.h>
#include<math.h>

 int main(){

   int x1,x2,y1,y2;
   double distancia;
   scanf("%d %d",&x1, &y1);
   scanf("%d %d",&x2, &y2);

   distancia = sqrt( pow( (x2 - x1), 2) + (pow( (y2 - y1), 2) ) );
   printf("%.4lf\n",distancia);  

return 0;
}