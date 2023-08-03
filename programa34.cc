// 6. Escreva um programa que declare um vetor de 6 números inteiros e inverta a ordem dos elementos. Em seguida, exiba o vetor resultante.
#include <iostream>
using namespace std;

int main(){
    int vetor[6];
    for (int i = 0; i < 6; i++){
        cout << "Digite um numero: " << endl;
        cin >> vetor[i];
    }
    int temp;
    for (int i = 0, j = 5; i < j; i++, j--){
        temp = vetor[i];
        vetor[i] = vetor[j];
        vetor[j] = temp;
    }
    cout << "Vetor invertido: ";
    for (int i = 0; i < 6; i++) {
        cout << vetor[i] << " ";
    }
    return 0;
}
