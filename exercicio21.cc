#include <iostream> // sintaxe correta é include

using namespace std; // usado para abreviar o std

int main(){
    int i, n;
    int soma = 0;
    cout << "digite um numero: ";
    cin >> n;
    for (i = 0; i <= n; i++){
        soma += i;
    }
    cout << "a soma dos numeros de 0 a "<< n << " eh " << soma << endl;
    return 0; // a sintaxe correta é return
}
