//6. Faça um programa que declare um vetor de 5 elementos inteiros representando o número de gols marcados por uma seleção em cada partida de uma edição da Copa do Mundo Feminina. Calcule e exiba o total de gols marcados por essa seleção.
#include <iostream>
#include <vector>
using namespace std;

int main(){
    // Gols da seleção francesa na Copa do Mundo Feminina 2019
    int gols[5] = {4, 2, 1, 2, 1}; // gols em cada partida
    int total = 0;

    for(int i = 0; i < 5; i++){ // percorre o vetor gols somando cada elemento presente no indice 0 até 4
        total = total + gols[i]; // soma os elementos
    }

    cout << "O total de gols da selecao francesa em 2019 foi: " << total << endl; // exibe o total de gols
    return 0;
}
