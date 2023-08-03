#include <stdio.h>
#include <stdlib.h>
int main() {
    int numero;
    printf("digite um numero: ");
    scanf("%d", &numero);

    if (numero > 0) {
        printf("O numero eh positivo!");
    }else{
        printf("O numero eh negativo ou zero!");
    }
    return 0;
}