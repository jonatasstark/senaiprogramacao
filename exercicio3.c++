#include <iostream>
int main() {

    int n1;
    int n2;
    int n3;

    std::cout << "digite um numero ";
    std::cin >> n1;
    std::cout << "digite um numero ";
    std::cin >> n2;
    std::cout << "digite um numero ";
    std::cin >> n3;

    if (n1>=n2 && n1>=n3){
        std::cout << n1 << ", eh o maior numero." << std::endl;
    }else if(n2>=n1 && n2>=n3){
        std::cout << n2 << ", eh o maior numero." << std::endl;
    }else if(n3>=n1 && n3>=n2){
        std::cout << n3 << ", eh o maior numero." << std::endl;
    }
    return 0;


}