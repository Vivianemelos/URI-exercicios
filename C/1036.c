#include <stdio.h>
 
int main() {
 
 double a, b, c, delta;
   double r1, r2;
     scanf("%lf",&a);
     scanf("%lf",&b);
     scanf("%lf",&c);
      
     delta = pow(b,2) - (4*(a)*(c));
      
      if((delta>0) && (a!=0))
       {
           r1 = (-(b) + sqrt(delta))/(2*a);
           r2 = (-(b) - sqrt(delta))/(2*a);
           printf("R1 = %.5lf\n",r1);
           printf("R2 = %.5lf\n",r2);
       }
       else{
          printf("Impossivel calcular\n");
       }  
 
    return 0;
}