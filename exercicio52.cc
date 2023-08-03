// Exercício 5: Crie um programa que leia três números inteiros e exiba o maior valor entre eles.
#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3, maior;

    cout << "Digite tres numeros: " << endl;
    cin >> num1 >> num2 >> num3;

    maior = num1;
    if (maior < num2) {
        maior = num2; 
    }
    if (maior < num3) {
        maior = num3;
    }
    cout << "Maior numero eh: " << maior << endl;
    return 0;
}
