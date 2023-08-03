//1. Crie um programa que declare um vetor de strings para armazenar o nome de 5 países que já venceram a Copa do Mundo Feminina. Em seguida, exiba os nomes dos países em ordem alfabética.
#include <iostream>
#include <algorithm> // biblioteca para usar a função sort

using namespace std;

int main(){
    // países com títulos de Copa do Mundo Feminina
    string paises[5] = {"Estados Unidos", "Alemanha", "Noruega", "Japao", "Brasil"};

    sort(paises, paises + 5); // ordena em ordem alfabética

    cout << "Paises em ordem alfabetica: " << endl;
    for(int i = 0; i < 5; i++){

        cout << paises[i] << ", "; // exibe os países ordenados
    }
    cout << endl;
    return 0;
}
