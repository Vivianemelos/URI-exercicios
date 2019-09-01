#include<stdio.h>
 
 int main(){
  
  int codigo1, numero1, codigo2, numero2;
  double valor1, valor2, valor3;
  scanf("%d", &codigo1);
  scanf("%d", &numero1);
  scanf("%lf", &valor1);
 
  scanf("%d", &codigo2);
  scanf("%d", &numero2);
  scanf("%lf", &valor2);

  valor3 = ((numero1 * valor1) + (numero2 * valor2));
  printf("VALOR A PAGAR: R$ %.2lf\n", valor3);
   
return 0;
}