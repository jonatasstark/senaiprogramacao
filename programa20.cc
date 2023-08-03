#include <iostream>

int main() {
    int opcao;

    std::cout << "digite uma opcao  (1-4): ";
    std::cin >> opcao;

    switch (opcao){
        case 1:
            std::cout << "opcao 1 selecionada." << std::endl;
            break;
        case 2:
            std::cout << "opcao 2 selecionada." << std::endl;
            break;
        case 3:
            std::cout << "opcao 3 selecionada." << std::endl;
            break;
        case 4:
            std::cout << "Sou um programador Jr." << std::endl;
            break;
        default:
            std::cout << "Opcao invalida." << std::endl;
            break;
    }
    return 0;
}
