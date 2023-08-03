// Exercício 9: Crie um programa que leia uma sequência de números inteiros e determine o maior e o menor valor digitado. A sequência é finalizada quando o usuário digitar o número zero.
#include <iostream>
using namespace std;

int main() {
    int num, maior = 0, menor = 0;
    bool primeiroNumero = true;

    while (true) {
        cout << "Digite um numero: " << endl;
        cin >> num;

        if (num == 0) {
            break;
        } else {
            if (primeiroNumero) {
                maior = num;
                menor = num;
                primeiroNumero = false;
            } else {
                if (num > maior) {
                    maior = num;
                }
                if (num < menor) {
                    menor = num;
                }
            }
        }
    }

    cout << "O maior eh " << maior << endl;
    cout << "O menor eh " << menor << endl;

    return 0;
}
