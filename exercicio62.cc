#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(static_cast<unsigned int>(time(0))); // Semente para a função rand()
    
    int dado;
    int lancamentos = 0;
    
    std::cout << "Simulacao de lancamento de dado (numero aleatorio de 1 a 6)...\n";
    
    do {
        dado = (rand() % 6) + 1; // Gera um número aleatório entre 1 e 6
        lancamentos++;
        std::cout << "Lancamento " << lancamentos << ": Resultado = " << dado << std::endl;
    } while (dado != 6);
    
    std::cout << "Parabens! Voce atingiu o resultado 6 apos " << lancamentos << " lancamentos.\n";
    
    return 0;
}
