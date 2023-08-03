// 3. Faça um programa que leia um vetor de 10 elementos inteiros e exiba a soma de todos eles.
#include <iostream>
using namespace std;

int main() {
    int vetor[10];
    int soma = 0;
    for (int i = 0; i < 10; i++){
        cout << "Digite um numero" << endl;
        cin >> vetor[i];
        soma = soma + vetor[i];
    }
    cout << "A soma dos vetores eh: " << soma << endl;
    return 0;
}