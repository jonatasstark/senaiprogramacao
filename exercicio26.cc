// contagem regressiva até 0
#include <iostream>
using namespace std;

int main(){
    int count = 5; // variável count que vale 5
    while (count >= 0) { // Enquanto count for maior ou igual a 0 acontece o loop
        cout << count << endl;
        count--; // decrementa a variável count até chegar em 0
    }

    return 0;
}
