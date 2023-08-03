// Exercício 5: Escreva um programa que peça ao usuário para digitar um número inteiro e verifique se ele é um número primo. Dessa vez, utilize uma função recursiva para realizar a verificação.
#include <iostream>

void verificarPrimo(int num){
    int total = 0;
    for (int i = 1; i <= num; i++){
        if (num % i == 0){
            std::cout << i << " ";
            total++;
        }
    }
    if (total == 2){
        std::cout  << "\nO numero digitado eh primo!" ;
    } else {
        std::cout << "\nO numero digitado nao eh primo!" ;
    }
}

int main(){
    int num;
    int total = 0;
    std::cout << "Digite um numero: ";
    std::cin >> num;
    verificarPrimo(num);

    return 0;
}