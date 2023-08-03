// Exercício 1: Escreva um programa que peça ao usuário para digitar dois números e exiba a soma desses números.
#include <iostream>
using namespace std;
int main() {

    int num1, num2;

    cout << "Digite dois numeros: " << endl;
    cin >> num1 >> num2;
    
    int soma = num1 + num2;
    cout << "o resultado eh: " << soma << endl;

    return 0;

 
}