// imprimir números pares
#include <iostream>
using namespace std;

int main() {
   for (int i = 1; i <= 10; i++) { // loop de 1 até 10
        if (i % 2 == 0) { // se o número dividido por 2 ter resto = 0, é par
            cout << i << endl; // imprimi números pares
        }
   }

   return 0;
}
