// Loop Do While - Contagem regressiva:
#include <iostream>
using namespace std;

int main() {
   int count = 10;
   do {
        cout << count << endl;
        count--; // decrementa a variável count até 1 e depois o loop encerra
   } while (count > 0); // loop encerra ao chegar em 0

   return 0;
}
