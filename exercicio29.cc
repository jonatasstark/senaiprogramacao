// soma dos primeiros 10 números
#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    int num = 1;
    while (num <= 10) {
        sum += num; // sum = sum + num
        num++; // faltou incrementar a variável num
    }
    cout << "A soma dos 10 primeiros números é: " << sum << endl;

    return 0;
}
