#include <stdio.h>

int main() {
    int numero = 10;

    if (numero > 0) {
        printf("o numero eh positivo. \n");
    } else {
        printf("o numero eh negativo.\n");
    }

    int contador = 0;
    while (contador < 5) {
        printf("contador: %d\n", contador);
        contador++; 
    }
    int i;
    for (i = 0; i < 5; i++) {
        printf("Iteracao do loop for: %d\n", i);
    }

    return 0;

}
