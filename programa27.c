#include <stdio.h>

int main() {
    //Este eh um comentario de linha unica
    /*Este eh um comentario
    de multiplas linhas */
    float numero;

    printf("digite um numero: ");
    scanf("%f", &numero); // leitura do numero

    printf("o numero digitado foi: %.2f\n", numero); // exibe o numero digitado pelo usuario

    return 0;
}
