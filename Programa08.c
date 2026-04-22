#include <stdio.h>
int main() {
    
    float peso, altura, calculo;
  
    printf("Digite sua altura: \n(ex:1.70) \n");
    scanf("%f", &altura);
    
     printf("Digite o seu peso: \n");
    scanf("%f", &peso);
    
    calculo = peso  /  (altura * altura);
    
  
    printf("Seu IMC e %.2f \n", calculo);

    system("pause");

    return 0;
}

