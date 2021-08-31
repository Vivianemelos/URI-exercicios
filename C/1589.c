#include <stdio.h>
 
int main() {
    
    int teste, n1,n2, i;
    scanf("%d",&teste);
    for(i = 1; i <=teste;i++){
        scanf("%d %d",&n1, &n2);
        printf("%d\n",n1+n2);
    }

    return 0;
}