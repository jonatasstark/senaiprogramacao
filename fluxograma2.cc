#include <iostream>
#include <string>
#include <vector>

using namespace std; // abreviar o std

struct Item // estrutura Item que irá receber nomes
{
    vector<string> nome; // vetor nomes
};

Item itens; // variável do tipo Item

// função para adicionar itens
void adicionarItem(){
    string nomeItem;
    cout << "Qual o nome do item: " << endl;
    cin.ignore(); // ignora qualquer coisa que foi digitada antes
    getline(cin, nomeItem); // faz a leitura
    itens.nome.push_back(nomeItem); // adiciona o item à lista
    cout << "Item adicionado com sucesso!" << endl;
}

// função para remover itens
void removerItem(){
    string nomeItem;
    cout << "Qual o item que deseja remover: " << endl;
    cin.ignore(); // ignora qualquer coisa que foi digitada antes
    getline(cin, nomeItem); // faz a leitura
    for (int i = 0; i < itens.nome.size(); i++){
        if (itens.nome[i] == nomeItem){
            cout << "Item removido com sucesso!" << endl;
            itens.nome.erase(itens.nome.begin() + i); // remove o item
            break;
        }else{
            cout << "Item nao encontrado!" << endl;
        }
    }
}

// função para exibir a lista
void exibirLista(){
    if (itens.nome.size() == 0){
        cout << "Nenhuma lista encontrada" << endl;
    }else{
        for (int i = 0; i < itens.nome.size(); i++){
            cout << "Nome do item: " << itens.nome[i] << endl;
        }
    }
}

int main(){ // programa principal
    int opcao;

    do{ // exibe as opções
        cout << "\n=== OPCOES ===" << endl; 
        cout << "1. Adicionar item" << endl;
        cout << "2. Remover item" << endl;
        cout << "3. Exibir lista" << endl;
        cout << "4. Sair" << endl;
        cout << "==============" << endl;


        cout << "Digite uma opcao: " << endl;
        cin >> opcao; // faz a leitura da opção digitada pelo usuário

        switch(opcao){
            case 1: // adiciona um item à lista
                adicionarItem();
                break;
            case 2: // remove um item da lista
                removerItem();
                break;
            case 3: // exibe a lista com todos os itens
                exibirLista();
                break;
            case 4: // encerra o programa
                cout << "Programa encerrado" << endl;
                break;
            default: // exibe opção inválida se a opção não estiver entre 1 e 4
                cout << "Opcao invalida" << endl;
                break;
        }
    }while(opcao != 4); // enquanto a opçao nao for 4, o loop continua

    return 0;
}
