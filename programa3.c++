#include <iostream>
int main(){
    int a = 5;
    int b = 3;

    bool igual = (a == b); // igual = false = 0
    bool diferente = (a != b); // diferente = true = 1
    bool maior = (a > b); // maior = true = 1
    bool menor = (a < b); // menor = false = 0
    bool maiorOuIgual = (a >= b); // maiorOuIgual = true = 1
    bool menorOuIgual = (a <= b);// menorOuIgual = false = 0

    std::cout << "É igual? " << igual << std::endl;
    std::cout << "É diferente? " << diferente << std::endl;
    std::cout << "É maior? " << maior << std::endl;
    std::cout << "É menor? " << menor << std::endl;
    std::cout << "É maior ou igual? " << maiorOuIgual << std::endl;
    std::cout << "É menor ou igual? " << menorOuIgual << std::endl;

    return 0;
}