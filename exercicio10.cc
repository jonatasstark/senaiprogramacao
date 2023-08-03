#include <iostream>
#include <string.h>

// Função para inverter uma string
void inverterString(char *str) {
   int inicio = 0;
   int fim = strlen(str) - 1;

   // Inverte a string trocando os caracteres de posição
   while (inicio < fim) {
        char temp = str[inicio];
        str[inicio] = str[fim];
        str[fim] = temp;

        inicio++;
        fim--;
   }
}

int main() {
   char palavra[100];

   // Solicita ao usuário que digite uma palavra
   std::cout << "Digite uma palavra: " ;
   std::cin >> palavra;

   // Chama a função para inverter a palavra digitada
   inverterString(palavra);

   // Exibe a palavra invertida na tela
   std::cout << "A palavra invertida é: \n" <<  palavra;
   return 0;
}