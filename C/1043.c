#include <stdio.h>
 
int main() {
 
  float A, B, C, per, area;
  scanf("%f %f %f",&A,&B,&C);  
    
  if((A<(B+C)) && (B<(A+C)) && (C<(A+B))){
    per = A+B+C;
    printf("Perimetro = %.1f\n",per);
  }    
  else{
    area = ((A+B)*C)/2;
    printf("Area = %.1f\n",area);   
  }
 return 0;
}