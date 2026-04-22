#include <stdio.h>
int main() {
   float n1, n2, n3, media;
   printf("Digite o primeiro valor inteiro. \n");
   scanf("%f", &n1);
   printf("Digite o segundo valor inteiro. \n");
   scanf("%f", &n2);
   printf("Digite o terceiro valor inteiro. \n");
   scanf("%f", &n3);
   
   media = (n1+n2+n3) /3;
  
   printf("A media dos valores sao %.2f \n", media);
   
   system("pause");
   
    return 0;
}


 

