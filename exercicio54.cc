// Exercício 2:Crie um programa que leia um número inteiro positivo e verifique se ele é um número perfeito. Um número perfeito é aquele cuja soma de seus divisores (exceto ele mesmo) é igual ao próprio número.
#include <iostream>
using namespace std;

int main(){
    int numero;
    int soma = 0;
    cout << "Digite um numero: ";
    cin >> numero;

    cout << "Os divisores de " << numero << " sao "; 
    for(int i = 1; i < numero; i++){ // i = i + 1
        if (numero % i == 0){
            cout << i << " ";
            soma += i; // soma = soma + i
        }
    }

    cout << "\n";
    if (numero == soma){
        cout << numero << " eh um numero perfeito" << endl;
    }else{
        cout << numero << " nao eh um numero perfeito" << endl;
    }

    return 0;
}