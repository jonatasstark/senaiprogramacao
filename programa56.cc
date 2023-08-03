// Exercicio 8
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> velocidade(6);
    vector<string> planetas;
    planetas.push_back("Mercurio");
    planetas.push_back("Venus");
    planetas.push_back("Terra");
    planetas.push_back("Marte");
    planetas.push_back("Jupiter");
    planetas.push_back("Saturno");

    float soma = 0;
    for(int i = 0; i < planetas.size(); i++){
        cout << "Digite a velocidade rotativa de " << planetas[i] << ": ";
        cin >> velocidade[i];
        soma = soma + velocidade[i];
    }

    float media = soma / velocidade.size();

    cout << "A media das velocidades eh: " << media << endl;

    return 0;
}