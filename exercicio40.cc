// Condicional if - Verificar se um número é positivo, negativo ou zero:
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Digite um número: ";
    cin >> num;

    if (num > 0) // Verifica se o número é maior que zero
        cout << "O número é positivo." << endl;
    else if (num < 0) // Verifica se o número é menor que zero
        cout << "O número é negativo." << endl;
    else // Caso contrário, o número é zero
        cout << "O número é zero." << endl;

    return 0;
}
