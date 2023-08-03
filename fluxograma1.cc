#include <iostream>
using namespace std;

int main(){
    int opcao;
    float num1, num2;

    cout << "Digite um numero: " << endl;
    cin >> num1;
    cout << "Digite o segundo numero: " << endl;
    cin >> num2;

    cout << "=== Opcoes ===" << endl;
    cout << "1. Somar" << endl;
    cout << "2. Subtrair" << endl;
    cout << "3. Multiplicar" << endl;
    cout << "4. Dividir" << endl;
    cout << "==============" << endl;

    cout << "Digite uma opcao: " << endl;
    cin >> opcao;

    switch (opcao)
    {
    case 1:
        int somar;
        somar = num1 + num2;
        cout << "O resultado da soma eh: " << somar << endl;
        break;
    case 2:
        int subtrair;
        subtrair = num1 - num2;
        cout << "O resultado da subtracao eh: " << subtrair << endl;
        break;
    case 3:
        int multiplicar;
        multiplicar = num1 * num2;
        cout << "O resultado da multiplicacao eh: " << multiplicar << endl;
        break;
    case 4:
        float dividir;
        dividir = num1 / num2;
        cout << "O resultado da divisao eh: " << dividir << endl;
        break;
    default:
        cout << "Opcao incorreta!" << endl;
        break;
    }
    return 0;
}
