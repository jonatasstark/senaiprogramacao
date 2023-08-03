#include <stdio.h>

int main(){
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);
    if (num % 2 == 0) { // chave para abrir o bloco IF
        printf("%d eh um numero par\n", num);
    }else{ // chave para fechar o bloco IF e abrir o bloco ELSE
        printf("%d eh um numero impar\n", num);
    } // chave para fechar o bloco ELSE
    return 0; // A sintaxe correta é return
}
