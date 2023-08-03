#include <iostream> // biblioteca para os comandos de entrada("cout") e saída("cin")

int main() { // funçao main que faz parte do programa principal
    int n; // foi criada uma variável "n"
    std::cout << "Digite um número: "; // mostra na tela para o usuário digitar um número 
    std::cin >> n; // "n" recebe o valor digitado pelo usuário
    int square = n * n; // foi criada uma variável "square" que recebe o valor de "n" multiplicado por ele mesmo
    std::cout << "O quadrado do número é: " << square << std::endl; // mostra na tela o valor de "square"
    return 0; // retorna o valor 0 (verdadeiro) e encerra o programa
} // fim do programa principal
