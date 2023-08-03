// 5. Escreva um programa que declare um vetor de 7 caracteres para representar a sigla dos países que sediaram a Copa do Mundo Feminina. Verifique se uma sigla específica digitada pelo usuário está presente no vetor e informe o resultado.
#include <iostream>
#include <vector>
using namespace std;

int main() {
    // vetor string armazena siglas de paises que sediaram a copa
    string vetor[8] = {"CHN", "SWE", "USA", "GER", "CAN", "FRA", "AUS", "NZL"};
    string sigla;

    cout << "Digite a sigla de um pais(Em maiusculo): " << endl;
    cin >> sigla; // faz a leitura da sigla digitada

    bool encontrado = false; // variavel bool inicializada em falso

    for(int i = 0; i < 8; i++){
        if(sigla == vetor[i]){ // se a sigla estiver no vetor 
            encontrado = true; // encontrado recebe true
        }
    }

    if(encontrado == true){
        cout << "Este pais sediou a copa do mundo feminina!" << endl;
    }else{
        cout << "Este pais nao sediou a copa do mundo feminina!" << endl;
    }

    return 0;
}