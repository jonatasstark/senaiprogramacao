// Condicional if - Verificar se uma string está vazia:
#include <iostream>
using namespace std;

int main() {
    string text;
    cout << "Digite um texto: ";
    getline(cin, text); // Lê uma linha completa de texto, incluindo espaços

    if (text != "") // Verifica se a string não está vazia
        cout << "O texto não está vazio." << endl;
    else
        cout << "O texto está vazio." << endl;

    return 0;
}