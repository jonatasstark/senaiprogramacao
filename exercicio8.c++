#include <iostream>
int main() {
    float media, num1, num2, num3;

    std::cout << "digite um numero ";
    std::cin >> num1;
    std::cout << "digite um numero ";
    std::cin >> num2;
    std::cout << "digite um numero ";
    std::cin >> num3;
 
    media = (num1 + num2 + num3)/3.0;

    std::cout << "a media eh: " << media;

    return 0;
}