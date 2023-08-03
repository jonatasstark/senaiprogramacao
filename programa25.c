#include <stdio.h>
#include <string.h>

int main() {
    char nome[20];

    strcpy(nome, "gabriel");

    char sobrenome[20] = "lucas";

    strcat(nome, " ");
    strcat(nome, sobrenome);

    printf("nome completo: %s\n", nome);

    return 0;
}
