#include <stdio.h>
 
 double valor_conta(int id, int qtd);			
 
 int main(){

 	int id, qtd;

 	scanf("%d %d", &id, &qtd);

 	printf("Total: R$ %.2lf\n",valor_conta(id,qtd));


 	return 0;
 }

  double valor_conta(int id, int qtd){
  	if(id==1){
  		return(qtd*4.00);
  	}
  	else if(id==2){
  		return(qtd*4.50);
  	}
  	else if(id==3){
  		return(qtd*5.00);
  	}
  	else if(id==4){
  		return(qtd*2.00);
  	}
  	else if(id==5){
  		return(qtd*1.50);
  	}
  }
