// Exercício 4: Implemente um programa que leia uma sequência de números inteiros terminada em zero (número zero indica o fim da sequência) e calcule a média dos números digitados.
#include <iostream>
using namespace std;

int main(){
    int num;
    float soma = 0;
    float media = 0;
    int contador = 0;
    do{
        cout << "Digite um numero ou 0 para parar: " << endl;
        cin >> num;
        if (num % 10 != 0){
            cout << "Digite um numero terminado em 0" << endl;
        }else{
            soma += num;
            contador++;
        }
    }while(num != 0);
    contador--; // não conta o número 0
    media = soma / contador;

    cout << "A media eh: " << media << endl;
    return 0;
}