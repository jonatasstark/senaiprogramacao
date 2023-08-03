// Este é um programa C++ para criar e gerenciar personagens em um jogo de RPG.
// O programa permite criar personagens, adicionar habilidades e equipamentos a eles,
// bem como exibir informações sobre os personagens e seus equipamentos.
// Ele usa estruturas, vetores e funções para realizar as operações.
// Se o programa não funcionar no VS Code, utilize outro compilador como o https://www.onlinegdb.com/online_c++_debugger
// GRUPO: Jonatas Gabriel e Gabriel Lucas (Bloco 02) - Senai Uberaba

#include <string> // Para variaveis tipo string e fazer modificaçoes) 
#include <vector> // Para armazenar elementos de um determinado tipo de maneira linear e permite o acesso aleatório rápido a qualquer elemento.
#include <iostream> // Para as funcoes de entrada(cout) e saida(getline)
#include <algorithm> // Para a função sort() que verifica um vetor e organiza em ordem crescente ou alfabética
#include <cctype> // Para a função isdigit() que verifica se um caractere é um dígito numérico
#include <locale> // Para a função std::setlocale() que configura o locale para permitir caracteres acentuados e especiais

const int LIMITE_PERSONAGEM = 10; // Variavel para manter limite máximo de criaçao de personagem

struct Equipamento { // Estrutura de dados que permite agrupar diferentes tipos de variáveis em um único objeto. (Permite criar vários equipamentos diferentes)
    std::string nome;
    std::string tipo;
    std::string atributo;
    int valor;
};

struct Personagem { // Estrutura de dados que permite agrupar diferentes tipos de variáveis em um único objeto. (Permite criar diferentes personagens)
    std::string nome;
    std::string classe;
    std::string sexo;
    int nivel, pontosDeVida, pontosDeAtaque;
    std::string raca;
    std::vector<std::string> habilidades; // Vetor para armazenar habilidades dos personagens
    std::vector<Equipamento> equipamentos; // Vetor para armazenar os equipamentos dos personagens
};

struct Personagem pessoa[LIMITE_PERSONAGEM]; // Array de estruturas Personagem para armazenar os personagens
int totalPersonagens = 0; // Contador para acompanhar o número total de personagens criados

// Função para verificar se um personagem existe e adicionar equipamentos/habilidades a ele
int buscarPersonagemPorNome(const std::string& nome) { // Função para adicionar equipamentos e habilidades em um personagem específico
    for (int i = 0; i < totalPersonagens; i++) {
        if (pessoa[i].nome == nome) {
            return i; // Personagem encontrado
        }
    }
    return -1; // Personagem não encontrado
}

// Função para verificar se uma string contém apenas letras e espaços (nenhum caractere especial)
bool possuiApenasLetras(const std::string& str) {
    for (char c : str) {
        if (!std::isalpha(c) && !std::isspace(c)) { // Verifica letra por letra 
            return false;
        }
    }
    return true;
}

// Função para verificar se uma string contém apenas dígitos numéricos (inteiros)
bool possuiApenasDigitos(const std::string& str) {
    for (char c : str) {
        if (!std::isdigit(c)) { // Verifica número por número
            return false;
        }
    }
    return true;
}

// Função para verificar se um personagem com o mesmo nome já existe
bool personagemExiste(const std::string& nome) {
    for (int i = 0; i < totalPersonagens; i++) {
        if (pessoa[i].nome == nome) {
            return true;
        }
    }
    return false;
}

// Função para tornar a primeira letra de uma string maiúscula
std::string title(const std::string& entrada) {
    std::string resultado = entrada;
    bool proximaLetraMaiuscula = true;

    for (char& c : resultado) {
        if (proximaLetraMaiuscula && std::isalpha(c)) {
            c = std::toupper(c);
            proximaLetraMaiuscula = false;
        } else if (std::isspace(c)) {
            proximaLetraMaiuscula = true; // Coloca a próxima letra em maiúscula
        }
    }

    return resultado;
}

// Função para ler uma entrada de string, validando o critério de apenas letras e nenhum caractere especial
std::string lerEntradaString() {
    std::string entrada;
    while (true) {
        std::getline(std::cin, entrada);
        if (!entrada.empty()) { // Verifica se a entrada não está vazia
            if (possuiApenasLetras(entrada)) {
                return title(entrada); // Torna a primeira letra maiúscula antes de retornar
            } else {
                std::cout << "Entrada inválida. Por favor, digite apenas letras." << std::endl;
            }
        }
    }
}

// Função para ler uma entrada de inteiro, validando o critério de apenas dígitos numéricos (inteiros)
int lerEntradaInteiro() {
    std::string entrada;
    int valor;
    while (true) {
        std::getline(std::cin, entrada);
        if (!entrada.empty() && possuiApenasDigitos(entrada)) { // Verifica se a entrada não está vazia e se tem apenas números
            // Converte a string válida para inteiro
            valor = std::stoi(entrada);
            if (valor > 0) {
                return valor;
            } else {
                std::cout << "Entrada inválida. Digite um valor inteiro maior que 0." << std::endl;
            }
        } else {
            std::cout << "Entrada inválida. Por favor, digite um inteiro válido." << std::endl;
        }
    }
}

// Função para criar um novo personagem
void criarPersonagem() {
    // Configura o locale para pt_BR para permitir a exibição de caracteres acentuados e especiais
    std::setlocale(LC_ALL, "pt_BR");
    do{
        std::cout << "Digite o nome do personagem: " << std::endl;
        pessoa[totalPersonagens].nome = lerEntradaString();
        if(personagemExiste(pessoa[totalPersonagens].nome)){
            std::cout << "Já existe um personagem com esse nome. Digite um novo nome." << std::endl;
            break;
        }else{ // caso o personagem não exista , crie um novo personagem
            if (totalPersonagens < LIMITE_PERSONAGEM) {
                std::cout << "Digite a classe do personagem: " << std::endl;
                pessoa[totalPersonagens].classe = lerEntradaString();
                std::cout << "Digite o nível do personagem: " << std::endl;
                pessoa[totalPersonagens].nivel = lerEntradaInteiro();
                std::cout << "Digite os pontos de vida: " << std::endl;
                pessoa[totalPersonagens].pontosDeVida = lerEntradaInteiro();
                std::cout << "Digite os pontos de ataque: " << std::endl;
                pessoa[totalPersonagens].pontosDeAtaque = lerEntradaInteiro();
                std::cout << "Digite a raça do personagem: " << std::endl;
                pessoa[totalPersonagens].raca = lerEntradaString();

                // Opção para o usuário digitar o sexo do personagem
                std::cout << "Digite o sexo do personagem (M - masculino, F - feminino, O - outro): " << std::endl;
                while (true) {
                    std::string sexo = lerEntradaString();
                    if (sexo == "M" || sexo == "m" || sexo == "F" || sexo == "f" || sexo == "O" || sexo == "o") {
                        pessoa[totalPersonagens].sexo = std::toupper(sexo[0]); // Armazena o sexo em maiúsculo
                        break;
                    } else {
                        std::cout << "Sexo inválido. Digite M (masculino), F (feminino) ou O (outro): " << std::endl;
                    }
                }

                totalPersonagens++; // total personagem aumenta em 1 ao criar um novo personagem
                break;
            } else {
                std::cout << "Limite de criação de personagem atingido. Máximo de " << LIMITE_PERSONAGEM << std::endl;
            }
        }
    }while(true);
}

// Função para adicionar equipamento a um personagem específico
void adicionarEquipamentoParaPersonagem() {
    if (totalPersonagens == 0) {
        std::cout << "Não foi possível adicionar item. Crie um personagem!" << std::endl;
        return;
    }

    std::cout << "Digite o nome do personagem para adicionar equipamento: ";
    std::string nomePersonagem = lerEntradaString();

    int indexPersonagem = buscarPersonagemPorNome(nomePersonagem);
    if (indexPersonagem == -1) {
        std::cout << "Personagem não encontrado." << std::endl;
        return;
    }

    Equipamento item; // cria um novo equipamento se o personagem existir
    std::cout << "Digite o nome do equipamento: " << std::endl;
    item.nome = lerEntradaString();
    std::cout << "Digite o tipo do equipamento: " << std::endl;
    item.tipo = lerEntradaString();
    std::cout << "Digite o atributo do equipamento: " << std::endl;
    item.atributo = lerEntradaString();
    std::cout << "Digite o valor do equipamento: " << std::endl;
    item.valor = lerEntradaInteiro();

    pessoa[indexPersonagem].equipamentos.push_back(item);
    std::cout << "Equipamento adicionado ao personagem com sucesso!" << std::endl;
}

// Função para comparar dois itens de equipamento para ordenação
bool compararEquipamentos(const Equipamento& equipamento1, const Equipamento& equipamento2) {
    return equipamento1.nome < equipamento2.nome;
}

// Função para organizar a lista de equipamentos em ordem alfabética
void organizarEquipamentosPorOrdemAlfabetica() {
    // Configura o locale para pt_BR para permitir a exibição de caracteres acentuados e especiais
    std::setlocale(LC_ALL, "pt_BR");
    if (totalPersonagens == 0) {
        std::cout << "Nenhum equipamento encontrado para comparar." << std::endl;
        return;
    }

    int indexPersonagem;
    std::cout << "Digite o nome do personagem para exibir a lista de equipamentos ordenados: ";
    std::string nomePersonagem = lerEntradaString();

    indexPersonagem = buscarPersonagemPorNome(nomePersonagem);
    if (indexPersonagem == -1) {
        std::cout << "Personagem não encontrado." << std::endl;
        return;
    }

    std::vector<Equipamento>& equipamentosDoPersonagem = pessoa[indexPersonagem].equipamentos;

    if (equipamentosDoPersonagem.size() >= 1) { // ordena os equipamentos de um personagem
        std::sort(equipamentosDoPersonagem.begin(), equipamentosDoPersonagem.end(), compararEquipamentos);
        std::cout << "===== Equipamentos em ordem alfabética: =====" << std::endl;
        for (int i = 0; i < equipamentosDoPersonagem.size(); i++) {
            std::cout << equipamentosDoPersonagem[i].nome << std::endl;
        }
        std::cout << "==============================================" << std::endl;
    } else {
        std::cout << "Nenhum equipamento encontrado para comparar." << std::endl;
    }
}

// Função para adicionar uma nova habilidade ao personagem
void adicionarHabilidadeParaPersonagem() {
    if (totalPersonagens == 0) {
        std::cout << "Não foi possível adicionar habilidade. Crie um personagem!" << std::endl;
        return;
    }

    std::cout << "Digite o nome do personagem para adicionar habilidade: ";
    std::string nomePersonagem = lerEntradaString();

    int indexPersonagem = buscarPersonagemPorNome(nomePersonagem);
    if (indexPersonagem == -1) {
        std::cout << "Personagem não encontrado." << std::endl;
        return;
    }

    std::string habilidade; //adiciona habilidade se o personagem existir
    std::cout << "Digite a habilidade: " << std::endl;
    habilidade = lerEntradaString();
    pessoa[indexPersonagem].habilidades.push_back(habilidade);
    std::cout << "Habilidade adicionada ao personagem com sucesso!" << std::endl;
}

// Função para remover um equipamento da lista
void removerEquipamento() {
    // Configura o locale para pt_BR para permitir a exibição de caracteres acentuados e especiais
    std::setlocale(LC_ALL, "pt_BR");
    if (totalPersonagens == 0) {
        std::cout << "Nenhum personagem encontrado para remover equipamento." << std::endl;
        return;
    }

    std::cout << "Digite o nome do personagem para remover equipamento: ";
    std::string nomePersonagem = lerEntradaString();

    int indexPersonagem = buscarPersonagemPorNome(nomePersonagem);
    if (indexPersonagem == -1) {
        std::cout << "Personagem não encontrado." << std::endl;
        return;
    }

    std::vector<Equipamento>& equipamentosDoPersonagem = pessoa[indexPersonagem].equipamentos;

    if (equipamentosDoPersonagem.size() == 0) {
        std::cout << "Nenhum equipamento encontrado para remover." << std::endl;
        return;
    }

    std::cout << "Digite o nome do equipamento que deseja remover: " << std::endl;
    std::string nomeEquipamento = lerEntradaString();

    auto it = std::find_if(equipamentosDoPersonagem.begin(), equipamentosDoPersonagem.end(), [&nomeEquipamento](const Equipamento& e) {
        return e.nome == nomeEquipamento; // verifica se o equipamento existe
    });

    if (it != equipamentosDoPersonagem.end()) { //apaga um equipamento da lista de equipamentos de um personagem
        equipamentosDoPersonagem.erase(it);
        std::cout << "Equipamento removido com sucesso!" << std::endl;
    } else {
        std::cout << "Equipamento não encontrado na lista de equipamentos do personagem." << std::endl;
    }
}

// Função para exibir a ficha de um personagem
void exibirPersonagem() {
    // Configura o locale para pt_BR para permitir a exibição de caracteres acentuados e especiais
    std::setlocale(LC_ALL, "pt_BR");
    if (totalPersonagens > 0) { // exibi ficha de personagem se existir algum personagem
        for (int i = 0; i < totalPersonagens; i++) {
            std::cout << "========== FICHA DE PERSONAGEM ==========" << std::endl;
            std::cout << "Nome: " << pessoa[i].nome << std::endl;
            std::cout << "Classe: " << pessoa[i].classe << std::endl;
            std::cout << "Nível: " << pessoa[i].nivel << std::endl;
            std::cout << "Pontos de Vida: " << pessoa[i].pontosDeVida << std::endl;
            std::cout << "Pontos de Ataque: " << pessoa[i].pontosDeAtaque << std::endl;
            std::cout << "Raça do Personagem: " << pessoa[i].raca << std::endl;
            std::cout << "Sexo do Personagem: " << pessoa[i].sexo << std::endl;
            std::cout << "=========================================" << std::endl;
        }
    } else {
        std::cout << "Nenhuma ficha de personagem encontrada para exibir." << std::endl;
    }
}

// Função para exibir a lista de equipamentos do personagem
void exibirItensDoPersonagem() {
    if (totalPersonagens == 0) {
        std::cout << "Nenhum personagem encontrado para exibir itens." << std::endl;
        return;
    }

    std::cout << "Digite o nome do personagem para exibir itens: ";
    std::string nomePersonagem = lerEntradaString();

    int indexPersonagem = buscarPersonagemPorNome(nomePersonagem);
    if (indexPersonagem == -1) {
        std::cout << "Personagem não encontrado." << std::endl;
        return;
    }

    if (pessoa[indexPersonagem].equipamentos.size() >= 1) { // exibi todos equipamentos de um personagem
        std::cout << "======= EQUIPAMENTOS DE " << pessoa[indexPersonagem].nome << " =======" << std::endl;
        for (int i = 0; i < pessoa[indexPersonagem].equipamentos.size(); i++) {
            std::cout << "Nome: " << pessoa[indexPersonagem].equipamentos[i].nome << std::endl;
            std::cout << "Tipo: " << pessoa[indexPersonagem].equipamentos[i].tipo << std::endl;
            std::cout << "Atributo: " << pessoa[indexPersonagem].equipamentos[i].atributo << std::endl;
            std::cout << "Valor: " << pessoa[indexPersonagem].equipamentos[i].valor << std::endl;
            std::cout << "=======================================" << std::endl;
        }
    } else {
        std::cout << "Nenhum equipamento encontrado para exibir." << std::endl;
    }
}

// Função para exibir a lista de habilidades do personagem
void exibirHabilidadeDoPersonagem() {
    if (totalPersonagens == 0) {
        std::cout << "Nenhum personagem encontrado para exibir habilidades." << std::endl;
        return;
    }

    std::cout << "Digite o nome do personagem para exibir habilidades: ";
    std::string nomePersonagem = lerEntradaString();

    int indexPersonagem = buscarPersonagemPorNome(nomePersonagem);
    if (indexPersonagem == -1) {
        std::cout << "Personagem não encontrado." << std::endl;
        return;
    }

    if (pessoa[indexPersonagem].habilidades.size() >= 1) { // exibi todas as habilidades do personagem
        std::cout << "======= HABILIDADES DE " << pessoa[indexPersonagem].nome << " =======" << std::endl;
        for (int i = 0; i < pessoa[indexPersonagem].habilidades.size(); i++) {
            std::cout << "Habilidade: " << pessoa[indexPersonagem].habilidades[i] << std::endl;
            std::cout << "=====================================" << std::endl;
        }
    } else {
        std::cout << "Nenhuma habilidade encontrada para exibir." << std::endl;
    }
}

// Função para buscar um equipamento do personagem pelo nome do personagem
void buscarEquipamentoPorNomePersonagem() {
    // Configura o locale para pt_BR para permitir a exibição de caracteres acentuados e especiais
    std::setlocale(LC_ALL, "pt_BR");
    if (totalPersonagens == 0) {
        std::cout << "Nenhum personagem encontrado para buscar equipamento." << std::endl;
        return;
    }

    std::cout << "Digite o nome do personagem para buscar equipamento: ";
    std::string nomePersonagem = lerEntradaString();

    int indexPersonagem = buscarPersonagemPorNome(nomePersonagem);
    if (indexPersonagem == -1) {
        std::cout << "Personagem não encontrado." << std::endl;
        return;
    }

    std::cout << "Digite o nome do equipamento que deseja buscar: " << std::endl;
    std::string nomeEquipamento = lerEntradaString();

    const std::vector<Equipamento>& equipamentosDoPersonagem = pessoa[indexPersonagem].equipamentos;
    for (const Equipamento& equipamento : equipamentosDoPersonagem) {
        if (equipamento.nome == nomeEquipamento) { // exibi os equipamentos encontrados
            std::cout << "======= Item encontrado! =======" << std::endl;
            std::cout << "Nome: " << equipamento.nome << std::endl;
            std::cout << "Tipo: " << equipamento.tipo << std::endl;
            std::cout << "Atributo: " << equipamento.atributo << std::endl;
            std::cout << "Valor: " << equipamento.valor << std::endl;
            std::cout << "================================" << std::endl;
            return;
        }
    }

    std::cout << "Equipamento não encontrado para o personagem." << std::endl;
}

int main() { // programa principal que vai buscar as opcoes digitadas pelo usuario , e responder de acordo com a opcao escolhida
    int opcao;

    // Configura o locale para pt_BR para permitir a exibição de caracteres acentuados e especiais
    std::setlocale(LC_ALL, "pt_BR");

    do {
        std::cout << "\nSelecione uma opção:" << std::endl;
        std::cout << "1. Criar personagem" << std::endl;
        std::cout << "2. Adicionar habilidade" << std::endl;
        std::cout << "3. Adicionar equipamento" << std::endl;
        std::cout << "4. Remover equipamento" << std::endl;
        std::cout << "5. Buscar equipamento" << std::endl;
        std::cout << "6. Exibir ficha de personagem" << std::endl;
        std::cout << "7. Exibir itens do personagem" << std::endl;
        std::cout << "8. Exibir habilidade do personagem" << std::endl;
        std::cout << "9. Organizar equipamentos por ordem alfabética" << std::endl;
        std::cout << "10. Sair do programa" << std::endl;

        std::cout << "\nDigite uma opção: " << std::endl;
        opcao = lerEntradaInteiro();
        std::cin.clear();

        switch (opcao) {
            case 1:
                criarPersonagem();
                break;
            case 2:
                adicionarHabilidadeParaPersonagem();
                break;
            case 3:
                adicionarEquipamentoParaPersonagem();
                break;
            case 4:
                removerEquipamento();
                break;
            case 5:
                buscarEquipamentoPorNomePersonagem();
                break;
            case 6:
                exibirPersonagem();
                break;
            case 7:
                exibirItensDoPersonagem();
                break;
            case 8:
                exibirHabilidadeDoPersonagem();
                break;
            case 9:
                organizarEquipamentosPorOrdemAlfabetica();
                break;
            case 10:
                std::cout << "Programa encerrado!" << std::endl;
                break;
            default:
                std::cout << "Opção inválida!" << std::endl;
                break;
        }
    } while (opcao != 10);

    return 0;
}// fim do programa