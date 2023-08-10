// Trabalho Senai. Código para gerar números aleatórios e realizar uma Mega Sena.
// Grupo: Gabriel Lucas e Jonatas Gabriel
#include <vector>
#include <iostream>
#include <algorithm> // biblioteca para usar a função sort
#include <ctime> // Gera uma semente para a geração de números aleatórios.
#include <random> // biblioteca usada para gerar números aleatórios.
using namespace std; // Abreviar o std;

vector<int> megaSenai() { // funçao que irá retornar um vetor com 6 numeros aleatorios entre 1 e 60
    vector<int> megaSena(60); // vetor que ira guardar 60 numeros da mega sena
    for (int i = 0; i < 60; i++) {
        megaSena[i] = i + 1; // vai adicionar no vetor os 60 numeros de 1 a 60
    }

    unsigned seed = static_cast<unsigned>(time(0)); // inicializa a semente para a função rand() usando o valor atual do tempo para gerar números aleatórios
    shuffle(megaSena.begin(), megaSena.end(), default_random_engine(seed)); // embaralha todos os numeros do vetor

    vector<int> numerosSorteados(megaSena.begin(), megaSena.begin() + 6); // vetor numerosSorteados que ira receber 6 numeros aleatorios  
    return numerosSorteados; // retorna os 6 numeros
}

int lerNumeroInteiro() { // validaçao para ler apenas numeros inteiros
    int entrada; // recebe o que foi digitado pelo usuario
    while (true) {
        cin >> entrada; // faz a leitura
        if (cin.fail()) { // verifica se a entrada falhou (caso o usuario digita uma letra)
            cin.clear(); // limpa o estado de erro
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // limpa o buffer e insere um espaço em branco (\n)
            cout << "Entrada invalida. Por favor, digite um numero inteiro: ";
        } else {
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Limpa o buffer e insere um espaço em branco (\n)
            return entrada; // retorna um numero inteiro válido e encerra o loop
        }
    }
}

int main(){ // programa principal
    int sorteiosRealizados = 0; // conta os sorteios realizados 
    while(true){
        vector<int> numerosEscolhidos; // vetor que ira guardar os numeros digitados pelo usuario
        int numero;
        int contador = 1;
        cout << "\nBoas Vindas ao Mega Senai: Escolha 6 numeros entre 1 e 60 para apostar!" << endl; 
        while (contador <= 6) { // enquanto o usuario nao digitar 6 numeros validos, o loop continua
            cout << "Digite o " << contador << " numero: ";
            numero = lerNumeroInteiro(); // faz a leitura do numero digitado chamando a função lerNumeroInteiro()
            if (numero >= 1 && numero <= 60) { // se o numero digitado estiver dentro de 1 e 60.
                if (find(numerosEscolhidos.begin(), numerosEscolhidos.end(), numero) == numerosEscolhidos.end()) { // verifica se o numero nao esta repetido
                    numerosEscolhidos.push_back(numero); // se nao estiver repetido, adiciona o numero ao vetor
                    contador++; // e o contador incrementa 1
                } else {
                    cout << "Voce ja escolheu esse numero!" << endl; // se estiver repetido, exibe uma mensagem na tela e o usuario tenta novamente
                }
            } else {
                cout << "Digite um numero entre 1 e 60." << endl; // se nao estiver entre 1 e 60, exibe uma mensagem na tela e o usuario tenta novamente
            }
        }

        sort(numerosEscolhidos.begin(), numerosEscolhidos.end()); // ordena em ordem crescente o vetor numeros escolhidos
        cout << "\nSeus numeros da sorte: " << endl;
        for(int i = 0; i < 6; i++){
            cout << numerosEscolhidos[i] << " "; // exibe na tela os numeros escolhidos pelo usuário
        }

        cout << endl; // pula de linha

        vector<int> numerosSorteados = megaSenai(); // vetor que irá chamar a função megaSenai() para receber os numeros sorteados

        sort(numerosSorteados.begin(), numerosSorteados.end()); // ordena em ordem crescente o vetor numeros sorteados
        cout << "Numeros sorteados: " << endl;
        for(int i = 0; i < 6; i++){
            cout << numerosSorteados[i] << " "; // exibe na tela os numeros sorteados
        }

        cout << endl; // pula de linha

        int acertos = 0; // conta quantos numeros o usuario acertou
        for(int i = 0; i < 6; i++){ // loop for para percorrer o vetor numeros escolhidos
            for (int j = 0; j < 6; j++){ // loop for para percorrer o vetor numeros sorteados
                if (numerosEscolhidos[i] == numerosSorteados[j]){ // verifica se os numeros sao iguais
                    acertos++; // incrementa em 1 se o usuario acertar os numeros
                }
            }
        }
        if (acertos == 6){ // se acertar todos os numeros, exibe que o usuario ganhou e encerra o programa
            cout << "Parabens, voce ganhou 200 milhoes de reais!" << endl;
            cout << "Muito bom! voce acertou os 6 numeros" << endl;
            cout << "Sorteios realizados: " << sorteiosRealizados << endl;
            cout << "Obrigado por jogar :)" << endl;
            break;
        }else{ // senao, exibe a quantidade de acertos
            cout << "Voce acertou " << acertos << " numeros!" << endl;
        }

        sorteiosRealizados++; // incrementa em 1 o tanto de sorteios realizados, se o usuario desejar continuar jogando

        char resposta;
        cout << "\nDeseja continuar jogando? (Digite 'N' para encerrar) " << endl; // Pergunta ao usuário se ele deseja continuar jogando
        cin >> resposta; // faz a leitura

        if (resposta == 'N' || resposta == 'n'){ // se resposta for não, encerra o programa, senao o programa continua
            cout << "Programa encerrado!" << endl;
            cout << "Sorteios realizados: " << sorteiosRealizados << endl;
            cout << "Obrigado por jogar :)" << endl;
            break;
        }
    }
    return 0;
}