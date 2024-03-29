#include <stdio.h>
#include <string.h>

int main() {
    char palavra[100];
    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    int inicio = 0;
    int fim = strlen(palavra) - 1;
    int ehPalindromo = 1;

    while (inicio < fim) {
        if (palavra[inicio] != palavra[fim]) { 
            ehPalindromo = 0;
            break;
        }
        inicio++;
        fim--;
    }

    if (ehPalindromo == 1) {
        printf("A palavra \"%s\" eh um palindromo.\n", palavra);
    } else {
        printf("A palavra \"%s\" nao eh um palindromo.\n", palavra);
    }

    return 0;
}
