#include <iostream>

int main() {
   int num;
   std::cout << "Digite um numero: " ;
   std::cin >> num;

   if (num > 0) {
        std::cout << "O numero "<< num <<" eh positivo.\n";
   } else if (num < 0) {
        std::cout << "O numero" << num << "eh negativo.\n";
   } else {
        std::cout << "O numero eh zero.\n";
   }

   return 0;
}
