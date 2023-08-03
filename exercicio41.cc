// Condicional if - Verificar se uma letra é uma vogal:
#include <iostream>
using namespace std;

int main() {
    char letter;
    cout << "Digite uma letra: ";
    cin >> letter;

    if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u')
        cout << "A letra é uma vogal." << endl;
    else
        cout << "A letra é uma consoante." << endl;

    return 0;
}
