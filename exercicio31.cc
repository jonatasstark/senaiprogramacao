// Loop For - Imprimir elementos de uma lista:
#include <iostream>
using namespace std;

int main() {
   int my_list[] = {1, 2, 3, 4, 5}; // vetor com 5 números
   int size = sizeof(my_list) / sizeof(my_list[0]); // variável size que vale 5
   for (int i = 0; i < size; i++) { // indices de 0, 1, 2, 3, 4
        cout << my_list[i] << " "; // imprimi os números que estão no vetor
   }

   return 0;
}