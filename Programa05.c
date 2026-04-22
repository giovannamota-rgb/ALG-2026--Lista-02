#include <stdio.h>
int main() {

    int numeros, n1, n2, n3;
    printf("Digite o primeiro numero: \n");
scanf("%d", &n1);
    printf("Digite o segundo numero: \n");
scanf("%d", &n2);
    printf("Digite o terceiro numero: \n");
scanf("%d", &n3);

if (n1 < n2) {
        numeros = n1;
        n1 = n2;
        n2 = numeros;
    }
     if (n1 < n3) {
        numeros = n1;
        n1 = n3;
        n3 = numeros;        
    }
          if (n2 < n3) {
                 numeros = n2;
                 n2 = n3;
                 n3 = numeros;
             }

             printf("Ordem decrescente: %d, %d, %d\n", n1, n2, n3);
system("pause");
             return 0;
         }


