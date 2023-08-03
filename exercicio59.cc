// Desenvolva um programa que leia um número inteiro e exiba a sequência de Fibonacci até o valor lido. A sequência de Fibonacci é aquela em que cada número é a soma dos dois anteriores: 0, 1, 1, 2, 3, 5, 8, 13, ..
#include <iostream>
using namespace std;

int main(){
        int fibo, num1 = 0, num2 = 1, num3;
        cout << "Digite quantos numeros serao exibidos na sequencia fibonacci: " << endl;
        cin >> fibo;
        if (fibo >= 1){
            cout << num1 << " ";
            if (fibo >= 2){
                cout << num2 << " ";
                for (int i = 3; i <= fibo; i++){    
                    num3 = num1 + num2;
                    cout << num3 << " ";
                    num1 = num2;
                    num2 = num3;
                }
            }
        }else{
            cout << "numero invalido" << endl;
        }

    return 0;
}