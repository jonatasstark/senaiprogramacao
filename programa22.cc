#include <iostream>

int soma(int a, int b){
    return a + b;
}
int subtracao(int a, int b){
    return a - b;
}
int multiplicacao(int a, int b){
    return a * b;
}
float divisao(int a, int b){
    return a / b;
}
int main(){
    std::cout << "O resultado da soma eh: " << soma(20, 4) << std::endl;
    std::cout << "O resultado da subtracao eh: " << subtracao(20, 4) << std::endl;
    std::cout << "O resultado da multiplicacao eh: " << multiplicacao(20, 4) << std::endl;
    std::cout << "O resultado da divisao eh: " << divisao(20, 4) << std::endl;

    return 0;
}
