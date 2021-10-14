#include <stdio.h>

 int main(){

    unsigned long long int patos;
    scanf("%llu",&patos);

    while(patos!=-1){
        if(patos==0){
            printf("%llu\n",patos);
        }
        else{
            printf("%llu\n",patos-1);
        }
        scanf("%llu",&patos);
   }
 return 0;
 }
