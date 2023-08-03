//Exercício 3: Desenvolva um programa que calcule o fatorial de um número inteiro digitado pelo usuário. O fatorial de um número n é dado por n! = n * (n - 1) * (n - 2) * ... * 1.
#include <iostream>

using namespace std;

int main() {
    int num;
    int fatorial = 1;

    cout << "Digite um numero: " << endl; 
    cin >> num;
    cout << "O fatorial de " << num << " eh: ";
    for(int i = num; i >= 1; i--){
        if (i > 1){
            cout << i << " * ";
        }
        else{
            cout << i << " = ";
        }
        fatorial *= i;
    }

    cout << fatorial << endl;

    return 0;
}
