//2. Escreva um programa que declare um vetor de inteiros para armazenar a quantidade de títulos de 8 países na Copa do Mundo Feminina. Em seguida, exiba o nome dos países que nunca venceram o torneio (países com 0 títulos).
#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Países que estão na Copa do Mundo Feminina 2023
    string paises[32] = {
        "Australia", "Nova Zelandia", "Brasil", "Coreia do Sul", "China",
        "Filipinas", "Vietnam", "Suecia", "Espanha", "Franca", "Dinamarca",
        "Canada", "Costa Rica", "Jamaica", "Zambia", "Marrocos", "Nigeria",
        "Africa do Sul", "Colombia", "Argentina", "Inglaterra", "Italia",
        "Holanda", "Suica", "Irlanda", "Haiti", "Portugal", "Panama", "Estados Unidos",
        "Alemanha", "Noruega", "Japao"
    };

    // Títulos dos países em ordem 
    int titulos[32] = {
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 4, 2, 1, 1
    };

    // Exibe países sem títulos
    cout << "Paises participantes que nunca venceram a Copa do Mundo Feminina:\n";
    for (int i = 0; i < 32; i++) {
        if (titulos[i] == 0) {
            cout << paises[i] << endl;
        }
    }

    return 0;
}
