#include <iostream> // sintaxe correta é include

using namespace std; // usado para abreviar o std

int main(){
    int num;
    cout << "Digite um numero: ";
    cin >> num;
    if (num % 2 == 0){ // faltou chave para abrir o bloco IF
        cout << num << " eh um numero par" << endl;
    }else{ // faltou chave para fechar o bloco IF e abrir o bloco ELSE
        cout << num << " eh um numero impar" << endl;
    } // faltou chave para fechar o bloco ELSE
    return 0; // sintaxe correta é return
}
