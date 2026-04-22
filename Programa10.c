#include <stdlib.h>
int main() {
    
    int n;
    int fat = 1;
    int i;
    
    printf("Digite um numero inteiro: \n");
scanf("%d", &n);

    for(i=1; i<=n; i++) {
    fat = fat * i;
    }
   
    printf("O fatorial desse numero e %d.\n", fat);
    
    system("pause");
   return 0;
}


