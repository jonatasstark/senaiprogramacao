#include <stdio.h>

int main() {
    int numeros[5]; // Declaração de um array de 5 elementos
    int i;
    for(i = 0 ; i < 5; i++){
        printf("Digite um numero: ");
        scanf("%d", &numeros[i]); // Lê os valores do array
    }
    printf("elementos do array:\n");
    
    for(i = 0; i < 5; i++) {
        printf("%d ", numeros[i]); // Exibe os valores do array
    }
    return 0;

}
