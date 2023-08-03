// Condicional if - Verificar se um número é primo:
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Digite um número: ";
    cin >> num;

    bool is_prime = true;
    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            is_prime = false;
            break;
        }
    }

    if (is_prime)
        cout << num << " é um número primo." << endl;
    else
        cout << num << " não é um número primo." << endl;

    return 0;
}