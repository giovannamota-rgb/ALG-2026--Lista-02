#include <stdio.h>
#include <stdlib.h> 
#include <time.h>   
int main() {
    int sorteio, palpite, tentativas = 1;

    srand(time(NULL)); 
    sorteio = rand() % 101;
    printf("Tente adivinhar o numero de 0 a 100!\n");

    while(1) {
        printf("Sua tentativa: ");
        scanf("%d", &palpite);

        if (palpite == sorteio) {
            printf("Parabens! Voce acertou em %d tentativas.\n", tentativas);
            break; 
        }

        if (sorteio < palpite) {
            printf("O numero sorteado e MENOR que %d.\n", palpite);
        } else {
            printf("O numero sorteado e MAIOR que %d.\n", palpite);
        }

        tentativas++; 
    }
system("pause");
    return 0;
}

