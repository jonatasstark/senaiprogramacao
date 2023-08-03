//Exercicio 9
#include <iostream>
#include <vector>
using namespace std;

int main() {
    string paises[8]; // Variavel vetor para armazenar o nome dos paises digitados
    cout << "Digite os paises participantes da Copa do Mundo Feminina 2023: " << endl;
    for (int i = 0; i < 8; i++) {
        cin >> paises[i]; // Faz a leitura de 8 paises digitados
    }

    cout << "Paises digitados pelo usuario: " << endl;
    for (int i = 0; i < 8; i++) {
        cout << paises[i] << " "; // Exibe o vetor paises
    }
    cout << endl;

    string temp; // Variavel temporaria para receber os primeiros indices
    for (int inicio = 0, fim = 7; inicio < fim; inicio++, fim--) { // Inverte a ordem do vetor
        temp = paises[inicio];
        paises[inicio] = paises[fim];
        paises[fim] = temp;
    }

    cout << endl;
    cout << "Paises invertidos no vetor: " << endl;
    for (int i = 0; i < 8; i++) { // Exibe o vetor paises já invertido
        cout << paises[i] << " ";
    }

    return 0;
}
