#include <iostream> // sintaxe correta é include

using namespace std; // faltou abreviar o std

int main() {
    int n;
    cout << "digite um numero: ";
    cin >> n;
    for (int i = 1; i<= n; i++) {
        cout << i << endl;
    }
    return 0;
}
