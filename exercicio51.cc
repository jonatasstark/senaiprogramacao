//Exercício 4: Implemente um programa que solicite ao usuário um número inteiro e verifique se ele é um número primo (divisível apenas por 1 e por ele mesmo).
#include <iostream>
int main(){
    int num;
    int total = 0;
    std::cout << "Digite um numero: ";
    std::cin >> num;
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


    return 0;
}