//Exercicio 4
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<float> temperatura(5); 
    vector<string> planetas;
    planetas.push_back("Mercurio");
    planetas.push_back("Venus");
    planetas.push_back("Terra");
    planetas.push_back("Marte");
    planetas.push_back("Jupiter");

    for (int i = 0; i < temperatura.size(); i++) {  
        cout << "Digite a temperatura media de " << planetas[i] << ": ";
        cin >> temperatura[i];
    }

    float soma = 0;

    for (int i = 0; i < temperatura.size(); i++) {  
        soma += temperatura[i];
    }

    float media = soma / temperatura.size();  

    cout << "A media das temperaturas digitadas eh: " << media << endl;

    return 0;
}
