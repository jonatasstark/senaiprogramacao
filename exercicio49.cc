//Exercício 2: Crie um programa que leia a idade de uma pessoa e verifique se ela é maior ou igual a 18 anos, exibindo "Maior de idade" ou "Menor de idade" conforme o caso.
#include <iostream>
using namespace std;

int main() {

    int idade;

    cout << "Digite sua idade" << endl;
    cin >> idade;

    if (idade >= 18){
        cout << "Maior de idade: " << endl;
    }else{
        cout << "Menor de idade: " << endl;
    }

    return 0;

}