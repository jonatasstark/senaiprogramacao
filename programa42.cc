// 4. Crie um programa que declare um vetor de 6 elementos do tipo float para armazenar as alturas (em metros) de jogadoras de uma seleção. Preencha-o com valores digitados pelo usuário e, em seguida, exiba a maior e a menor altura presente no vetor.
#include <iostream>
#include <vector>
using namespace std;

int main(){
    // jogadoras da seleção brasileira
    string jogadoras[6] = {"Marta", "Tamires", "Debinha", "Beatriz", "Ary Borges", "Geyse"};

    // altura das jogadoras em ordem
    float altura[6];
    for (int i = 0; i < 6; i++){
        cout << "Digite a altura de " << jogadoras[i] << ": "; // Pergunta a altura das jogadoras presentes no vetor jogadoras
        cin >> altura[i]; // Faz a leitura da altura das jogadoras
    }

    // Inicia a variável maior e menor com o valor do primeiro índice do vetor altura
    float maior = altura[0];
    float menor = altura[0];

    for (int i = 0; i < 6; i++){ // percorre o vetor do índice 0 até o 5
        if (maior < altura[i]){ // se maior for menor que o próximo índice, a variável maior recebe o valor do numero que está neste índice
            maior = altura[i];
        }
        if (menor > altura[i]){ // se menor for maior que o próximo índice, a variável menor recebe o valor do numero que está neste índice
            menor = altura[i];
        }
    }
    // Exibe maior e menor
    cout << "\nA maior altura do vetor eh: " << maior << endl;
    cout << "A menor altura do vetor eh: " << menor << endl;

    return 0;
}