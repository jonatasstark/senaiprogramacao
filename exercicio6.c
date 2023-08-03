#include <stdio.h>
int main() {
    int n = 10;
    int soma = 0;
    int i = 0;

    while (i <= n) {
        soma = soma + i;
        i++;
    }

    printf("A soma dos numeros de 1 a %d eh: %d\n", n, soma);
   
    return 0;
}
