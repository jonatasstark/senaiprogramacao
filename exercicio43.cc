// Condicional if - Verificar se uma pessoa é maior de idade:
#include <iostream>
using namespace std;

int main() {
    int idade;

    cout << "Digite sua idade: ";
    cin >> idade;

    if (idade >= 18)
        cout << "Você é maior de idade." << endl;
    else
        cout << "Você é menor de idade." << endl;
        
    return 0;
}
