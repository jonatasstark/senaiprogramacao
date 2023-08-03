#include <iostream>

int main() {
    int numero1;
    int numero2;
    int numero3;
    float media;

    std::cout << "Digite um número: ";
    std::cin >> numero1;
    std::cout << "Digite um número: ";
    std::cin >> numero2;
    std::cout << "Digite um número: ";
    std::cin >> numero3;
    
    media = (numero1 + numero2 + numero3) / 3.0;

    std::cout << "A media dos numeros eh: " << media << std::endl;
    return 0;
}
