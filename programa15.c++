#include <iostream>

int main() {
    int numeros[6];
    for(int i = 0; i < 6; i++) {
        std::cout << "digite um numero: ";
        std::cin >> numeros[i];

    }
    std::cout << "elementos do array:" << std::endl;
    for(int i= 0; i < 6; i++) {
        std::cout << numeros[i] << " ";
    }
    return 0;
}
