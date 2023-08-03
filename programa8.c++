#include <iostream>

int main() {
    int numero = 10;

    if (numero > 0) {
        std::cout << "O numero eh positivo." << std::endl;
    } else {
        std::cout << "O numero eh negativo." << std::endl;
    }

    int contador = 0;
    while (contador < 5) {
        std::cout << "Contador: " << contador << std::endl;
        contador++; 
    }
    for (int i = 0; i < 5; i++){

        std::cout << "Iteracao do loop for: " << i << std::endl;
    }

    return 0;

}
