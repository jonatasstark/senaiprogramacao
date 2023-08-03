// 5. Crie um programa que declare um vetor de 7 elementos do tipo float. Preencha-o com números reais digitados pelo usuário e, em seguida, exiba o maior e o menor valor presente no vetor.
#include <iostream>
using namespace std;

int main() {
    float vetor[7];
    float maior;
    float menor;
    for (int i = 0; i < 7; i++){
        cout << "Digite um numero: " << endl;
        cin >> vetor[i];
    }
    maior = vetor[0];
    menor = vetor[0];
    for (int i = 1; i < 7; i++){
        if( maior < vetor[i]){
            maior = vetor[i];
        }
        if(menor > vetor[i]){
            menor = vetor[i];
        }
    }
    cout << "O maior numero eh: " << maior << endl;
    cout << "O menor numero eh: " << menor << endl;

    return 0;
}