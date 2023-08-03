// Condicional if - Verificar se um número é par:
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Digite um número: "; 
    cin >> num; // recebe a varialvel num

    if (num % 2 == 1){ // se der resto 1 é impar se der resto 0 e par
        cout << "O número é ímpar." << endl;
    }else{
        cout << "O número é par." << endl;
    }
    return 0;
}
