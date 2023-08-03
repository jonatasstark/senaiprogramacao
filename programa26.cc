#include <iostream>
#include <string>

int main() {
    std::string nome;

    nome = "jonatas"; 

    std::string sobrenome = "gabriel";

    std::string nomecompleto = nome + " " + sobrenome;

    std::cout << "nome completo: " << nomecompleto << std::endl;

    return 0;
}
