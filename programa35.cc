// 7. Crie um programa que declare um vetor de 5 caracteres e preencha-o com letras do alfabeto digitadas pelo usuário. Verifique se uma letra específica (também digitada pelo usuário) está presente no vetor e informe o resultado.
#include <iostream> 
using namespace std;

int main() {
    char vetor[5];
    for(int i = 0; i < 5; i++){
        cout << "Digite uma letra: " << endl;
        cin >> vetor[i];
    }
    char letra;
    cout << "Digite uma letra para saber se esta no vetor: " << endl;
    cin >> letra;
    for(int i = 0; i < 5; i++){
        if(letra == vetor[i]){
            cout << "Letra encontrada no vetor!" << endl;
            break;
        }else{
            cout << "Letra nao encontrada no vetor!" << endl;
            break;
        }
    }
    return 0;
}
