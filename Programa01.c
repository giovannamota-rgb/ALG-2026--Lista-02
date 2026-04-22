#include <stdio.h>

int main() {
  
    int totalSegundos, horas, minutos, segundos;

    printf("Digite a quantidade de segundos: ");
    scanf("%d", &totalSegundos);

    horas = totalSegundos / 3600;

    int resto = totalSegundos % 3600;

    minutos = resto / 60;

    segundos = resto % 60;

    printf("%d segundos equivalem a: %d horas, %d minutos e %d segundos.\n", 
            totalSegundos, horas, minutos, segundos);

system("pause");
    return 0;
}
