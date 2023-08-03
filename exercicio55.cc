// Exercício 3: Desenvolva um programa que leia uma temperatura em graus Fahrenheit e converta-a para graus Celsius. A fórmula de conversão é: celsius = (fahrenheit - 32) * 5/9.
#include <iostream>
using namespace std;

int main() {
    float celsius;
    float fahrenheit;

    cout << "Digite uma temperatura em fahrenheit: " << endl;
    cin >> fahrenheit;
    celsius = (fahrenheit - 32) * 5/9;

    cout << "A temperatura convertida em celsius eh: " << celsius << endl;

    return 0;
    
}