// 8. Faça um programa que declare um vetor de 10 elementos inteiros e exiba a média dos valores presentes no vetor.
#include <iostream>
using namespace std;

int main() {
    float vetor[10];
    float soma = 0;
    for(int i = 0; i < 10; i++){
        cout << "Digite um numero: " << endl;
        cin >> vetor[i];
        soma = soma + vetor[i];
    }
    float media = soma / 10;
    cout << "A media eh: " << media << endl;
    
    return 0;
}