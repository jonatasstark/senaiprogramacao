// 4. Escreva um programa que declare um vetor de 8 números inteiros e, em seguida, exiba apenas os elementos pares do vetor.
#include <iostream>
using namespace std;

int main() {
    int vetor[8];
    for(int i = 0; i < 8; i++){
        cout << "Digite um numero: ";
        cin >> vetor[i];
    }
    cout << "Elementos pares do vetor: " << endl;
    for(int i = 0; i < 8; i++){
        if(vetor[i] % 2 == 0){
            cout << vetor[i] << " ";
        }
    }
    return 0;
}
