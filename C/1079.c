#include<stdio.h>
 
 int main(){
	
	double valor_1, valor_2, valor_3;
	double media_ponderada;
	int i, teste;
	
	scanf("%d",&teste);
	for(i=0;i<teste;i++){
		scanf("%lf %lf %lf",&valor_1,&valor_2, &valor_3);
		
		media_ponderada = (((float)valor_1*2) + (valor_2*3) + (valor_3*5))/10;
		printf("%.1lf\n",media_ponderada);
		
	}
 return 0;
 
 }
