#include <iostream> // biblioteca usada para os comandos de entrada("cout") e saída("cin")

int main() { // função main que faz parte do programa principal
    int num1 = 5; // criada uma variável int num1 com o valor = 5
    int num2 = 10; // criada uma variável int num2 com o valor = 10
    int resultado_soma = num1 + num2; // criada uma variável resultado_soma que recebe a soma de num1 + num2
    int resultado_multiplicacao = num1 * num2; // criada uma variável resultado_multiplicacao que recebe a multiplicacao de num1 * num2

    std::cout << "A soma de " << num1 << " e " << num2 << " é: " << resultado_soma << std::endl; // imprimi na tela a soma de num1 + num2
    std::cout << "A multiplicação de " << num1 << " e " << num2 << " é: " << resultado_multiplicacao << std::endl; // imprimi na tela a multiplicacao de num1 * num2

    return 0; // retorna o valor 0 ("true") e encerra o programa
} // fim do programa principal