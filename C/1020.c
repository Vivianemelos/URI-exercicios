#include <stdio.h>
 
int main() {
 
    int N, ano, aux, mes, dia;
    scanf("%d",&N);
    
    ano = N/365;
    aux = N%365;
    mes = aux/30;
    dia = aux%30;
    
    printf("%d ano(s)\n",ano);
    printf("%d mes(es)\n",mes);
    printf("%d dia(s)\n",dia);
 
    return 0;
}