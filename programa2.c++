#include <iostream>

int main() {
    int a, b;
    std::cout << "Digite o valor de a: ";
    std::cin >> a;
    std::cout << "Digite o valor de b: ";
    std::cin >> b;

    int soma = a + b;   
    int subtracao = a - b;  
    int multiplicacao = a * b; 
    float divisao = a / b;  

    std::cout << "A Soma eh: " << soma << std::endl;
    std::cout << "A Subtracao eh: " << subtracao << std::endl;
    std::cout << "A Multiplicacao eh: " << multiplicacao << std::endl;
    std::cout << "A Divisao eh: " << divisao << std::endl;

    return 0;
}
