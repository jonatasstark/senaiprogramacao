// Loop While - Verificar número primo:
#include <iostream>
using namespace std;

int main() {
   int num = 7;
   bool is_prime = true;
   int i = 2;
   while (i < num) { // Faltou tirar o <= e deixar apenas <
        if (num % i == 0) { // se o número dividido por i tiver resto = 0, não é primo
            is_prime = false;
        }
        i++;
   }
   if (is_prime) { // se for true é primo, se for false não é primo
        cout << num << " é um número primo." << endl;
   } else {
        cout << num << " não é um número primo." << endl;
   }

   return 0;
}
