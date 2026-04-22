#include <stdio.h>
int calcularMDC(int a, int b) {
    while (b != 0) {
        int resto = a % b;
        a = b;
        b = resto;
    }
    return a;
}

int calcularMMC(int a, int b) {
    if (a == 0 || b == 0) return 0;
    return (a * b) / calcularMDC(a, b);
}

int main() {
    int n1, n2;

    printf("--- Calculadora de MMC ---\n");
    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero: ");
    scanf("%d", &n2);

    int resultado = calcularMMC(n1, n2);

    printf("\nO MMC entre %d e %d e: %d\n", n1, n2, resultado);

system("pause");
    return 0;
}


