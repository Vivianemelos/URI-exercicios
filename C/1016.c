#include <stdio.h>
 
int main() {
 
    int distancia, tempo;
    scanf("%d",&distancia);
    
    tempo = (distancia * 60)/30;
    printf("%d minutos\n",tempo);
    
    return 0;
}