 #include<stdio.h>

  int main(){

    double N1, N2, N3, N4, nota_e, media_f, media;
    scanf("%lf",&N1);
    scanf("%lf",&N2);
    scanf("%lf",&N3);
    scanf("%lf",&N4);
    media = ((float)(N1*2) + N2*3 + N3*4 + N4*1)/10;
    if(media>=7.0){
      printf("Media: %.1lf\n",media);
      printf("Aluno aprovado.\n");
    }
   else if(media<5.0){
      printf("Media: %.1lf\n",media);
      printf("Aluno reprovado.\n");
   }
   else{
     printf("Media: %.1lf\n",media);
     printf("Aluno em exame.\n");
     scanf("%lf",&nota_e);
     printf("Nota do exame: %.1lf\n",nota_e);
     media_f = ((float)(nota_e) + media)/2;
       if(media_f>=5.0){
         printf("Aluno aprovado.\n");
         printf("Media final: %.1lf\n",media_f);
       }
       else{
         printf("Aluno reprovado.\n");
         printf("Media final: %.1lf\n",media_f);
       }

   }
 return 0;
 }
