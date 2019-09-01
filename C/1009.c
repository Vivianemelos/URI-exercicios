#include<stdio.h>
 
 int main(){
  
   char nome[50];
   double salario, TOTAL;
   scanf("%s", &nome);     
   scanf("%lf", &salario);
   scanf("%lf", &TOTAL);
     
   TOTAL = ((TOTAL * 0.15) + salario);
   printf("TOTAL = R$ %.2lf\n", TOTAL);
   
   
return 0;
}