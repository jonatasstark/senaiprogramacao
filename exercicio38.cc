// Condicional if - Verificar se um número está no intervalo correto:
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Digite um número: ";
    cin >> num; // recebe um numero digitado pelo usuario

    if (num >= 0 && num <= 10){ // verifica se esta entre 0 e 10
        cout << "O número está no intervalo de 0 a 10." << endl;
    }else{
        cout << "O número não está no intervalo de 0 a 10." << endl;
    }
    return 0;
}
