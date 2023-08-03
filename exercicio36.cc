// Condicional if - Verificar se um número é positivo:
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Digite um número: ";
    cin >> num; // recebe o numero digitado pelo usuário

    if (num > 0)
        cout << "O número é positivo." << endl; // é positivo se o numero for maior que 0
    else
        cout << "O número é negativo ou zero." << endl;

    return 0;
}
