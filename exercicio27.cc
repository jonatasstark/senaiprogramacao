// loop para verificar senha
#include <iostream>
using namespace std;

int main() {
    string password; 
    do {
        cout << "Digite a senha: ";
        cin >> password;
    } while (password != "secreto"); // o loop continua enquanto a senha estiver incorreta

    cout << "Senha correta!" << endl; // encerra o loop se a senha for igual a "secreto"
    return 0; // encerra o programa
}
