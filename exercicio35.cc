// Loop While - Verificar palíndromo:
#include <iostream>
using namespace std;

int main() {
    string word = "level";
    bool is_palindrome = true;
    int i = 0;
    while (i < word.length()) { // enquanto i for menor que o tamanho da string
        if (word[i] != word[word.length() - i - 1]) { // se a primeira letra for diferente que a última e assim por diante, encerra o loop
            is_palindrome = false; // is palindrome recebe falso se for diferente
        }
        i++;
    }
    if (is_palindrome) {
        cout << word << " é um palíndromo." << endl;
    } else {
        cout << word << " não é um palíndromo." << endl;
    }

    return 0;
}
