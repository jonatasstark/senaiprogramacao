// 3. Faça um programa que leia um vetor de 10 números inteiros representando as idades das jogadoras de uma seleção de futebol feminino. Em seguida, exiba a média das idades.
#include <iostream>
#include <vector>
using namespace std;

int main(){
    // Jogadoras da seleção brasileira
    string jogadoras[10] = {"Marta", "Tamires", "Debinha", "Beatriz", "Ary Borges", "Geyse",
    "Andressa", "Leticia", "Gabi Nunes", "Kerolin"};

    // Idade das jogadoras em ordem
    float idade[10] = {37, 35, 31, 29, 22, 25, 30, 28, 26, 23};
    float soma = 0;
    float media;

    for(int i = 0; i < 10; i++){
        soma = soma + idade[i]; // soma o vetor idade
    }
    media = soma / 10; // calcula a media

    cout << "A media das idades das jogadoras eh: " << media << endl;
    return 0;
}