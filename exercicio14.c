#include <stdio.h>

int main() {
   int num;
   printf("Digite um número: ");
   scanf("%d", &num);

   if (num > 0) {
        printf("O número %d é positivo.\n", num);
   } else if (num < 0) {
        printf("O número %d é negativo.\n", num);
   } else {
        printf("O número é zero.\n");
   }

   return 0;
}
