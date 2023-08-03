// Exercicio 5
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<float> massa;
    // Massa dos planetas anões em massa terrestre
    massa.push_back(0.00015);   // Ceres
    massa.push_back(0.002);     // Plutão
    massa.push_back(0.00067);   // Haumea
    massa.push_back(0.00067);   // Makemake
    massa.push_back(0.0028);    // Eris
    massa.push_back(0.0008);    // 2007 OR10
    massa.push_back(0.00068);   // Quaoar
    massa.push_back(0.00019);   // Sedna

    float soma = 0;
    for (int i = 0; i < massa.size(); i++){
        soma = soma + massa[i];
    }

    cout << "O total de massa terrestre desses 8 planetas anoes eh: " << soma << endl;

    return 0;
}