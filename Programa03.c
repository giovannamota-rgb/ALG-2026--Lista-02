#include <stdio.h>
int main() {
    char letra;

    printf("Digite uma letra: ");
    scanf(" %c", &letra);

   
    if (letra >= 'a' && letra <= 'z') {
        if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
            printf("A letra '%c' e uma vogal.\n", letra);
        } else {
            printf("A letra '%c' e uma consoante.\n", letra);
        }
    } 
   
    if (letra >= 'A' && letra <= 'Z') {
        if (letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U') {
            printf("A letra '%c' e uma vogal.\n", letra);
        } else {
            printf("A letra '%c' e uma consoante.\n", letra);
        }
    }
system("pause");
    return 0;
}


