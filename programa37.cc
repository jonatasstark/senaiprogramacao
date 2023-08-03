// Exercicio 9
#include <iostream>
using namespace std;

int main() {
    int vetor1[5]; // Declaração do primeiro vetor de 5 elementos inteiros

    cout << "Vetor 1: " << endl;
    for(int i = 0; i < 5; i++){
        cout << "Digite um numero: ";
        cin >> vetor1[i]; // Preenche o vetor1 com valores fornecidos pelo usuário
    }
    cout << endl;

    int vetor2[5]; // Declaração do segundo vetor de 5 elementos inteiros

    cout << "Vetor 2: " << endl;
    for(int i = 0; i < 5; i++){
        cout << "Digite um numero: ";
        cin >> vetor2[i]; // Preenche o vetor2 com valores fornecidos pelo usuário
    }
    cout << endl;

    int vetor3[5] = {}; // Declaração do terceiro vetor de 5 elementos inteiros, inicializado com valor 0

    cout << "Vetor 3: " << endl;
    for(int i = 0; i < 5; i++){
        vetor3[i] = vetor1[i] + vetor2[i]; // Soma os elementos correspondentes de vetor1 e vetor2 e armazena no vetor3
        cout << vetor3[i] << " "; // Exibe o conteúdo do vetor3
    }

    return 0;
}
