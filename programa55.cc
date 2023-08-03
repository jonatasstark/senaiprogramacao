// Exercicio 7
#include <iostream>
#include <vector>
#include <cctype> // Inclua a biblioteca para usar toupper()
using namespace std;

int main(){
    vector<string> constelacoes;
    // Adicionando constelações ao vetor
    constelacoes.push_back("Orion");
    constelacoes.push_back("Ursa Maior");
    constelacoes.push_back("Cisne");
    constelacoes.push_back("Leao");
    constelacoes.push_back("Escorpiao");

    bool encontrado = false;
    string nome;

    cout << "Digite o nome de uma constelacao(sem acento): ";
    getline(cin, nome); // Lê uma linha de entrada, incluindo espaços

    // Converter a primeira letra para maiúscula
    if (!nome.empty()) { // Verifica se a entrada não está vazia
        nome[0] = toupper(nome[0]); // Converte a primeira letra para maiúscula
    }

    // Percorrer o vetor de constelações e verificar se o nome digitado coincide
    for (int i = 0; i < constelacoes.size(); i++){
        if (nome == constelacoes[i]){
            encontrado = true;
            break; // Encerra o loop se a constelação for encontrada
        }
    }

    // Exibir resultado da busca
    if(encontrado == true){
        cout << "Constelacao encontrada no vetor!" << endl;
    } else {
        cout << "Constelacao nao encontrada no vetor!" << endl;
    }

    return 0;
}
