#include <stdio.h>
 
int main() {
 
    int N, hora, aux, min, seg;
    scanf("%d",&N);
    
    hora = N/3600;
    aux = N%3600;
    min = aux/60;
    seg = aux%60;
    
    printf("%d:%d:%d\n",hora,min,seg);
 
    return 0;
}