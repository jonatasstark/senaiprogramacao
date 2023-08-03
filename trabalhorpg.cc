#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

const int LIMITE_PERSONAGEM = 1;

struct Personagem {
    std::string nome;
    std::string classe;
    int nivel, pontosDeVida, pontosDeAtaque;
    std::string raca;
};

struct Equipamento {
    std::string nome;
    std::string tipo;
    std::string atributo;
    int valor;
};

struct Personagem pessoa[LIMITE_PERSONAGEM];
std::vector<std::string> habilidades;
std::vector<Equipamento> equipamentos;
int totalPersonagens = 0;

void criarPersonagem(){
    if (totalPersonagens == 0){
        std::cout << "Digite o nome do personagem: " << std::endl;
        std::cin >> pessoa[totalPersonagens].nome;
        std::cout << "Digite a classe do personagem: " << std::endl;
        std::cin >> pessoa[totalPersonagens].classe;
        std::cout << "Digite o nivel do personagem: " << std::endl;
        std::cin >> pessoa[totalPersonagens].nivel;
        std::cout << "Digite os pontos de vida: " << std::endl;
        std::cin >> pessoa[totalPersonagens].pontosDeVida;
        std::cout << "Digite os pontos de ataque: " << std::endl;
        std::cin >> pessoa[totalPersonagens].pontosDeAtaque;
        std::cout << "Digite a raca do personagem: " << std::endl;
        std::cin >> pessoa[totalPersonagens].raca;
        totalPersonagens++;
    }else{
        std::cout << "Limite de criacao de personagem atingido. Maximo de 1" << std::endl;
    }
}

void adicionarEquipamento(){
    for(int i=0; i <= totalPersonagens; i++){
        if(totalPersonagens == 0){
            std::cout << "Nao foi possivel adicionar item. Crie um personagem!" << std::endl;
        }else{
            Equipamento item;
            std::cout << "Digite o nome do equipamento: " << std::endl;
            std::cin >> item.nome;
            std::cout << "Digite o tipo do equipamento: " << std::endl;
            std::cin >> item.tipo;
            std::cout << "Digite o atributo do equipamento: " << std::endl;
            std::cin >> item.atributo;
            std::cout << "Digite o valor do equipamento: " << std::endl;
            std::cin >> item.valor;
            equipamentos.push_back(item);
            break;
        }
    }
}

bool compararEquipamentos(const Equipamento& equipamento1, const Equipamento& equipamento2) {
    return equipamento1.nome < equipamento2.nome;
}

void organizarEquipamentos() {
    std::sort(equipamentos.begin(), equipamentos.end(), compararEquipamentos);

    std::cout << "Equipamentos em ordem alfabética:" << std::endl;

    for (int i = 0; i < equipamentos.size(); i++) {
        std::cout << equipamentos[i].nome << " ";
    }
    std::cout << "\n";
}

void adicionarHabilidade(){
    for(int i=0; i <= totalPersonagens; i++){
        if(totalPersonagens == 0){
            std::cout << "Nao foi possivel adicionar habilidade. Crie um personagem!" << std::endl;
        }else{
            std::string habilidade;
            std::cout << "Digite a sua habilidade: " << std::endl;
            std::cin >> habilidade;
            habilidades.push_back(habilidade);
            break;
        }
    }
}

void removerEquipamento() {
    std::string nome;
    std::cout << "Digite o nome do equipamento que deseja remover: " << std::endl;
    std::cin >> nome;
    for (int i = 0; i < equipamentos.size(); i++) {
        if (equipamentos[i].nome == nome) {
            equipamentos.erase(equipamentos.begin() + i);
            std::cout << "Item removido com sucesso!" << std::endl;
            return;
        }
    }
    std::cout << "Item nao encontrado na lista de equipamentos." << std::endl;
}

void exibirPersonagem(){
    for(int i = 0; i < totalPersonagens; i++){
        std::cout << "========== FICHA DE PERSONAGEM ==========" << std::endl;
        std::cout << "nome: " << pessoa[i].nome << std::endl;
        std::cout << "classe: " << pessoa[i].classe << std::endl;
        std::cout << "nivel: " << pessoa[i].nivel << std::endl;
        std::cout << "pontos de vida: " << pessoa[i].pontosDeVida << std::endl;
        std::cout << "pontos de ataque: " << pessoa[i].pontosDeAtaque << std::endl;
        std::cout << "raca do personagem: " << pessoa[i].raca << std::endl;
        std::cout << "======================================" << std::endl;
    }
}

void exibirItens(){
    for(int i = 0; i < equipamentos.size(); i++){
        std::cout << "========== EQUIPAMENTOS ==========" << std::endl;
        std::cout << "nome: " << equipamentos[i].nome << std::endl;
        std::cout << "atributo: " << equipamentos[i].atributo << std::endl;
        std::cout << "tipo: " << equipamentos[i].tipo << std::endl;
        std::cout << "valor: " << equipamentos[i].valor << std::endl;
        std::cout << "==================================" << std::endl;
    }
}

void exibirHabilidade(){
    for (int i = 0; i < habilidades.size(); i++){
        std::cout << "========== HABILIDADES ==========" << std::endl;
        std::cout << "habilidade do personagem: " << habilidades[i] << std::endl;
        std::cout << "=================================" << std::endl;
    }
}

void buscarEquipamento() {
    std::string nome;
    std::cout << "Digite o nome do equipamento que deseja buscar: ";
    std::cin >> nome;
    for (int i = 0; i < equipamentos.size(); i++) {
        if (equipamentos[i].nome == nome) {
            std::cout << "Item encontrado!" << std::endl;
            std::cout << "Nome: " << equipamentos[i].nome << std::endl;
            std::cout << "Tipo: " << equipamentos[i].tipo << std::endl;
            std::cout << "Atributo: " << equipamentos[i].atributo << std::endl;
            std::cout << "Valor: " << equipamentos[i].valor << std::endl;
            return;
        }
    }
    std::cout << "Equipamento nao encontrado" << std::endl;
}

int main() {
    int opcao;

    do {
        std::cout << "Selecione uma opcao:" << std::endl;
        std::cout << "1. Criar personagem" << std::endl;
        std::cout << "2. Adicionar habilidade" << std::endl;
        std::cout << "3. Adicionar equipamento" << std::endl;
        std::cout << "4. Remover equipamento" << std::endl;
        std::cout << "5. Buscar equipamento" << std::endl;
        std::cout << "6. Exibir ficha de personagem" << std::endl;
        std::cout << "7. Exibir itens do personagem" << std::endl;
        std::cout << "8. Exibir habilidade do personagem" << std::endl;
        std::cout << "9. Organizar equipamentos por ordem alfabetica" << std::endl;
        std::cout << "10. Sair do programa" << std::endl;

        std::cout << "Digite uma opcao: ";
        std::cin >> opcao;

        switch (opcao) {
            case 1:
                criarPersonagem();
                break;
            case 2:
                adicionarHabilidade();
                break;
            case 3:
                adicionarEquipamento();
                break;
            case 4:
                removerEquipamento();
                break;
            case 5:
                buscarEquipamento();
                break;
            case 6:
                exibirPersonagem();
                break;
            case 7:
                exibirItens();
                break;
            case 8:
                exibirHabilidade();
                break;
            case 9:
                organizarEquipamentos();
                break;
            case 10:
                std::cout << "Programa encerrado" << std::endl;
                break;
            default:
                std::cout << "Opcao invalida!" << std::endl;
                break;
        }

        std::cout << std::endl;
    } while (opcao != 10);

    return 0;
}
