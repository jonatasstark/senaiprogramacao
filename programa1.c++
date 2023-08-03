#include <iostream>
int main()
{
    int numero;

    std::cout << "Digite um numero:";
    std::cin >> numero;

    if (numero % 2 == 0 || numero == 0)
    {

        std::cout << "O numero eh par." << std::endl;
    }
    else
    {

        std::cout << "O numero eh impar." << std::endl;
    }

    return 0;
}
