//Exercicio 2
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<float> distancia;
    distancia.push_back(57.9);    // Mercúrio em milhões de km
    distancia.push_back(108.2);   // Vênus em milhões de km
    distancia.push_back(149.6);   // Terra em milhões de km
    distancia.push_back(227.9);   // Marte em milhões de km
    distancia.push_back(778.5);   // Júpiter em milhões de km
    distancia.push_back(1400.0);  // Saturno em milhões de km
    distancia.push_back(2871.0);  // Urano em milhões de km
    distancia.push_back(4498.0);  // Netuno em milhões de km
    
    vector<string> planetas;
    planetas.push_back("Mercurio");
    planetas.push_back("Venus");
    planetas.push_back("Terra");
    planetas.push_back("Marte");
    planetas.push_back("Jupiter");
    planetas.push_back("Saturno");
    planetas.push_back("Urano");
    planetas.push_back("Netuno");

    float maior = distancia[0];
    float menor = distancia[0];
    for (int i = 0; i < distancia.size(); i++) {
        if (maior < distancia[i]) {
            maior = distancia[i];
        }
        if (menor > distancia[i]) {
            menor = distancia[i];
        }
    }

    cout << "O planeta com menor distancia do sol eh: ";
    for (int i = 0; i < distancia.size(); i++) {
        if (menor == distancia[i]) {
            cout << planetas[i] << endl;
        }
    }

    cout << "O planeta com maior distancia do sol eh: ";
    for (int i = 0; i < distancia.size(); i++) {
        if (maior == distancia[i]) {
            cout << planetas[i] << endl;
        }
    }

    return 0;
}
