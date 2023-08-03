//2. Escreva um programa que declare um vetor de caracteres (string) para armazenar o nome de 5 frutas. Em seguida, exiba o nome de cada fruta em uma linha separada.
#include <iostream>
using namespace std; 

int main () {
    string vetor[5];
    for(int i = 0; i < 5; i++){
    cout << "Digite o nome de uma fruta: " << endl;
    cin >> vetor[i];

    }
    cout << "Elementos do vetor: " << endl;
    for(int i = 0; i < 5; i++){
        cout << vetor[i] << endl;
    }
    return 0;
}