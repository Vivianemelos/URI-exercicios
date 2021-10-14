#include<stdio.h>

 int main(){

   int tab, i;
   long int N;
   scanf("%lu",&N);
   for(i=1;i<=10;i++){
     tab = N*i;
     printf("%d x %lu = %d\n",i,N,tab);
   }

 return 0;
 }
