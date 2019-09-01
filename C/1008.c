#include<stdio.h>
 
 int main(){
   
   int NUMBER, num_h;
   double SALARY;
   scanf("%d", &NUMBER);
   scanf("%d", &num_h);
   scanf("%lf", &SALARY);

   SALARY = SALARY * num_h;
   printf("NUMBER = %d\n", NUMBER);
   printf("SALARY = U$ %.2lf\n", SALARY);  

return 0;
}