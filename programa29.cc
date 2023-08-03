//1. Crie um programa que declare um vetor de inteiros com 5 elementos e preencha-o com valores digitados pelo usuário. Em seguida, exiba os elementos na tela.
#include <iostream>
using namespace std;

int main(){
    int vetor[5];
    for (int i = 0; i < 5; i++){
        cout << "Digite um numero: ";
        cin >> vetor[i];
    }

    cout << "elementos do vetor: " << endl;
    for (int i = 0; i < 5; i++){
        cout << vetor[i] << endl;
    }

    return 0;
}
