//8. Escreva um programa que declare um vetor de 6 números inteiros para representar as datas (dia) em que ocorreram os jogos de uma fase da Copa do Mundo Feminina. Em seguida, inverta a ordem das datas no vetor e exiba o vetor resultante.
#include <iostream>
#include <vector>
using namespace std;

int main(){
    // Data dos jogos da primeira fase de grupos da Copa do Mundo Feminina 2019
    int data[6] = {7, 8, 9, 10, 11, 12}; // dias
    int temp; // variável para armazenar início do vetor temporário

    // Inverte a ordem do vetor data
    for(int inicio = 0, fim = 5; inicio < fim; inicio++, fim--){
        temp = data[inicio];
        data[inicio] = data[fim];
        data[fim] = temp;
    }

    //Exibe o vetor data já invertido
    cout << "Vetor invertido: " << endl;
    for(int i = 0; i < 6; i++){
        cout << data[i] << " ";
    }

    return 0;
}