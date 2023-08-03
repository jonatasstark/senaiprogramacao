#include <stdio.h> // biblioteca usada para printf e scanf é a stdio.h

int main() {
    int num;
    printf("digite um numero: ");
    scanf("%d", &num);
    int i; // variavel declarada fora do loop FOR
    for (i = 1; i <= num; i++){ // repetir de 1 ate o numero que o usuario digitar
        printf("%d\n", i); // indentaçao para ficar dentro do FOR
    }
    return 0; // a sintaxe correta é return com U
}
