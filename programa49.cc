//Exercicio 1
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<string> planetas;

    planetas.push_back("Mercurio");
    planetas.push_back("Marte");
    planetas.push_back("Netuno");
    planetas.push_back("Terra");
    planetas.push_back("Saturno");

    sort(planetas.begin(), planetas.end());

    cout << "Planetas em ordem alfabetica: " << endl;
    for (int i = 0; i < planetas.size(); i++) {
        cout << planetas[i] << " "; 
    }

    return 0;
}
