#include <iostream>

int main() {
    int idade;

    std::cout << "digite sua idade: ";
    std::cin >> idade;

    if (idade >= 18) {
        std::cout << "voce eh maior de idade." << std::endl;
    } else {
        std::cout << "voce eh menor de idade." << std::endl;
    }

    return 0;
}