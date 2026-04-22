#include <stdio.h>
int main() {
    
    float tamanhoMB, velocidadeMbps, tempoSegundos, tempoMinutos;

    printf("Digite o tamanho do arquivo (em MB): \n");
    scanf("%f", &tamanhoMB);

    printf("Digite a velocidade do link de Internet (em Mbps): \n");
    scanf("%f", &velocidadeMbps);
    
    tempoSegundos = (tamanhoMB * 8) / velocidadeMbps;
    
    tempoMinutos = tempoSegundos / 60;

    printf("\nO tempo aproximado de download e de: %.2f minutos\n", tempoMinutos);
    
    system("pause");
    
    return 0;
}

