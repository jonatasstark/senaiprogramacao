// Exercicio 6
#include <iostream>
#include <vector>
using namespace std;

int main() {
    std::vector<int> massa;

    // Adicionando as massas solares das estrelas
    massa.push_back(2); //Sirius A: Massa cerca de 2.02 massas solares.
    massa.push_back(1); //Alpha Centauri A: Massa aproximadamente igual à do Sol.
    massa.push_back(20); //Betelgeuse: Massa cerca de 20 massas solares.
    massa.push_back(23); //Rigel: Massa cerca de 23 massas solares.
    massa.push_back(2); //Vega: Massa cerca de 2.1 massas solares.
    massa.push_back(18); //Antares: Massa cerca de 18 massas solares.
    massa.push_back(19); //Deneb: Massa cerca de 19 massas solares.

    // Contando quantas estrelas têm massa superior a 3 vezes a massa do Sol
    int contador = 0;
    for (int i = 0; i < massa.size(); i++) {
        if (massa[i] > 3.0) {
            contador++;
        }
    }

    std::cout << "Número de estrelas com massa superior a 3 vezes a massa do Sol: " << contador << std::endl;

    return 0;
}