#include <stdio.h>
 
int main() {
 
   double t, v, d;
   double q;
   scanf("%lf",&t);
   scanf("%lf",&v);
   
   d = v * t;
   q = d/12;
   printf("%.3lf\n",q);
   
    return 0;
}