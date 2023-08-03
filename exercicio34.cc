// Loop For - Exibir caracteres de uma string:
#include <iostream>
using namespace std;

int main() {
    string text = "Loop For";
    for (int i = 0; i < text.length(); i++) { // não pode colocar nome de variavel como palavra reservada de c++
        cout << text[i] << endl; // trocamos "char" por "i"
    }

    return 0;
}
