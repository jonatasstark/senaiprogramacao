#include <iostream>
int main(){
    char x[3];
    std::cout << "Digite Sim ou Nao: ";
    std::cin >> x;
    if (x == "Sim"){
        std::cout << "Compilador nosso, que estás em execução, Santificado seja o teu código-fonte. Venha a nós o teu debug, Seja feita a tua correção, Assim no sistema como na memória. O loop nosso de cada dia nos dai hoje, Perdoai os nossos bugs, Assim como nós perdoamos os bugs alheios. Não nos deixeis cair em deadlocks, E livrai-nos das variáveis não inicializadas. Dá-nos paciência para a compilação lenta, E sabedoria para encontrar os erros de lógica. Protege-nos dos vazamentos de memória, E guia-nos pelo caminho da otimização correta. Que as bibliotecas sejam sempre atualizadas, E que a documentação esteja sempre completa. Dá-nos o domínio da linguagem C/C++, E inspira-nos com algoritmos eficientes. A main!" << std::endl;
    } else {
        std::cout << "Boa dia!" << std::endl;
    }
    return 0;

}