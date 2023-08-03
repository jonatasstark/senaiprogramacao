//Exercicio 10
#include <iostream>
#include <vector>
using namespace std;

int main(){
    //Vetor com os numeros de espectadores da final, 3º lugar, semi, quartas e 2 jogos das oitavas da Copa Feminina 2019
    int espectadores[10] = {57900, 20316, 48452, 53512, 25301, 
    22600, 45595, 21111, 21076, 17492};

    int contador = 0; // contador de jogos
    for (int i = 0; i < 10; i++){
        if (espectadores[i] > 50000){ // se o numero que está no indice do vetor for maior que 50000
            cout << espectadores[i] << " "; // exibe-o na tela
            contador++; // contador soma 1
        }
    }

    // exibe a quantidade de jogos
    cout << endl;
    cout << "Numero de jogos em que o publico foi superior a 50000: " << contador << " jogos" << endl;

    return 0;
}