// Exercício 6: Crie um programa que leia três valores do tipo double que representem os lados de um triângulo. Verifique se é possível formar um triângulo com esses valores e, caso seja, determine se é um triângulo equilátero, isósceles ou escaleno.
#include <iostream>
using namespace std;

int main() {

    double l1, l2, l3;
    
    cout << "Digite tres valores dos lados de um triangulo: " << endl;
    cin >> l1 >> l2 >> l3;

    if(l1 + l2 > l3 && l2 + l3 > l1 && l3 + l1 > l2){
        cout << "Eh possivel formar um triangulo!" << endl;
        if (l1 == l2 && l1 == l3 && l2 == l3){
            cout << "Eh um triangulo equilatero!" << endl;
        }else if(l1 != l2 && l2 != l3 && l1 != l3){
            cout << "Eh um triangulo escaleno!" << endl;
        }else{
            cout << "Eh um triangulo isosceles" << endl;
        }
    }else{
        cout << "Nao eh possivel formar um triangulo!" << endl;
    }

    return 0;
}
