//7. Crie um programa que declare dois vetores de 5 elementos cada, todos inteiros, representando os gols marcados e os gols sofridos por uma seleção em cinco partidas de uma edição da Copa do Mundo Feminina. Calcule e exiba o saldo de gols dessa seleção (gols marcados - gols sofridos) em cada partida.
#include <iostream>
#include <vector>
using namespace std;

int main(){
    // Gols marcados da seleção francesa na Copa do Mundo Feminina 2019
    int golsmarcados[5] = {4, 2, 1, 2, 1}; // gols em cada partida
    int totalmarcado = 0;

    // Gols sofridos da seleção francesa na Copa do Mundo Feminina 2019
    int golssofridos[5] = {0, 1, 0, 1, 2}; // gols em cada partida
    int totalsofrido = 0;

    for (int i = 0; i < 5; i++){ // percorre os dois vetores
        totalmarcado = totalmarcado + golsmarcados[i]; // soma os gols marcados
        totalsofrido = totalsofrido + golssofridos[i]; // soma os gols sofridos
    }

    int saldo = 0; // variavel para calcular o saldo de gols
    saldo = totalmarcado - totalsofrido;

    cout << "O saldo de gols da selecao francesa em 2019 foi: " << saldo << endl;

    return 0;
}