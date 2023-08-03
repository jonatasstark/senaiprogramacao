#include <iostream>
int main(){
    bool expressao1 = true;
    bool expressao2 = true;
    bool expressao3 = true;

    bool resultadoAND = (expressao1 && expressao2 && expressao3); // resultadoAND = 0
    bool resultadoOR = (expressao1 || expressao2); //resultadoOR = 1
    bool resultadoNOT = (!expressao2); // resultadoNOT = 0

    std::cout << "o resultado eh " << resultadoAND << std::endl;
    std::cout << "o resultado eh " << resultadoOR << std::endl;
    std::cout << "o resultado eh " << resultadoNOT << std::endl;

    return 0;
}
