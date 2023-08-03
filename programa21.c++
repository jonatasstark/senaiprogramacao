#include<iostream>

int main() {
    int x;
    std::cout << "Quantas vezes quer repetir? ";
    std::cin >> x;
    for (int contador = 0; contador <= x; contador++) {
        std::cout << contador << std::endl;
    }

    return 0;
}
