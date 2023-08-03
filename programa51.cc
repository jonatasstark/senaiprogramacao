//Exercicio 3
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<float> estrela;
    // Magnitude de algumas estrelas do sistema solar
    estrela.push_back(-1.46);  // Sirius
    estrela.push_back(-0.72);  // Canopus
    estrela.push_back(-0.04);  // Arcturus
    estrela.push_back(0.03);   // Vega
    estrela.push_back(0.08);   // Capella
    estrela.push_back(0.13);   // Rigel


    float soma = 0;
    for(int i = 0; i < estrela.size(); i++){
        soma += estrela[i];
    }


    float media = soma / estrela.size();
    cout << "A media das magnitudes eh: " << media << endl;

    return 0;
}