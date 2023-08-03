//Exercicio 10
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(0))); // Inicializa a semente para a função rand() usando o valor atual do tempo para gerar números aleatórios diferentes a cada execução

    int vetor[4]; // Declara um vetor de 4 elementos inteiros

    // Preenche o vetor com valores aleatórios entre 1 e 10
    for(int i = 0; i < 4; i++){
        vetor[i] = (rand() % 10) + 1; // Gera um número aleatório entre 1 e 10 e armazena no elemento i do vetor
    }

    int numero; // Variável para armazenar o número digitado pelo usuário
    bool encontrado = false; // Variável booleana para indicar se o número foi encontrado no vetor ou não

    cout << "Digite um numero entre 1 e 10: " << endl;
    cin >> numero; // Lê o número digitado pelo usuário

    // Verifica se o número digitado está presente no vetor
    for(int i = 0; i < 4; i++){
        if (numero == vetor[i]){
            encontrado = true; // Se o número foi encontrado no vetor, a variável encontrado é definida como true
        }
    }

    // Exibe a mensagem indicando se o número foi encontrado no vetor ou não
    if(encontrado == true){
        cout << "Numero encontrado no vetor!" << endl;
    }else{
        cout << "Numero nao encontrado no vetor!" << endl;
    }

    // Exibe os números presentes no vetor
    cout << "Numeros que estao no vetor: " << endl;
    for(int i = 0; i < 4; i++){
        cout << vetor[i] << " "; // Imprime os elementos do vetor separados por espaço
    }

    return 0;
}
