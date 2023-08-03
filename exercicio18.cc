#include <iostream> // a sintaxe correta é include

using namespace std; // faltou abreviar o std

int main() {
    int n1, n2, soma;
    cout << "Digite dois numeros: ";
    cin >> n1 >> n2;
    soma = n1 + n2;
    cout << "A soma dos numeros eh " << soma << endl;
    return 0;
}
