//Exercício 1: Escreva um programa que calcule a área de um retângulo, solicitando ao usuário a base e a altura. Em seguida, exiba o resultado.
#include <iostream>
using namespace std;

int main() {
    float base, altura;
    cout << "Digite a base do retangulo: " << endl;
    cin >> base;
    cout <<"Digite a altura do retangulo: " << endl;
    cin >> altura;

    cout << "O resultado eh: " << base * altura << endl;

    return 0;
}