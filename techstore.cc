#include <iostream>
#include <string>

    const int TAMANHO_ESTOQUE = 100;
    struct Produto
    {
        char nome[100];
        int codigo;
        float preco;
        int quantidade;
    };
    
    struct Produto estoque[TAMANHO_ESTOQUE];
    int totalProdutos = 0;
    void registrarEntrada(char nome[], int codigo, int quantidade, float preco){
        // Solicitar informações sobre o novo produto
        strcpy(estoque[totalProdutos].nome, nome);
        estoque[totalProdutos].codigo = codigo;
        estoque[totalProdutos].quantidade = quantidade;
        estoque[totalProdutos].preco = preco;
        totalProdutos = totalProdutos + 1;
    }

    void registrarVenda(int codigo){
        // Solicitar informações sobre o produto vendido

        // Procurar o produto no estoque
        int indiceProduto = -1;
        for (int i = 0; i < totalProdutos; i++) {
            if (estoque[i].codigo == codigo) {
                indiceProduto = i;
                break;
            }
        }

        if (indiceProduto != -1) {
            // Verificar a disponibilidade do produto
            if (estoque[indiceProduto].quantidade > 0) {
                std::cout << "Produto disponivel! Realize o registro da venda.";
                estoque[indiceProduto].quantidade = estoque[indiceProduto].quantidade - 1;
            }else{
                std::cout << "Produto esgotado!";
            }
        }else{
            std::cout << "Produto nao encontrado!";
            return;
        }
        
    }

    void gerarRelatorio() {
        for (int i = 0; i<totalProdutos; i++) {
            std::cout << "\nNome: " << estoque[i].nome;
            std::cout << "\nCódigo: " << estoque[i].codigo;
            std::cout << "\nQuantidade: " << estoque[i].quantidade;
            std::cout << "\nPreco: " << estoque[i].preco;
            std::cout << "\n-----------------------------";
        }
    }

    // Programa principal
    int main(){
        int opcao;
        do{
            std::cout << "\n===== MENU =====";
            std::cout << "\n1. Registrar entrada de produto: ";
            std::cout << "\n2. Registrar venda de produto: ";
            std::cout << "\n3. Gerar relatorio de estoque: ";
            std::cout << "\n4. Sair";
            std::cout << "\nEscolha uma opcao: ";
            std::cin >> opcao;

            switch (opcao)
            {
            case 1:
                char nome[100];
                float preco;
                int quantidade;
                int codigo;
                std::cout << "Informe o nome do produto: ";
                std::cin >> (nome);

                std::cout << "Informe o codigo do produto: ";
                std::cin >> (codigo);

                std::cout << "Informe a quantidade do produto: ";
                std::cin >> (quantidade);

                std::cout << "Informe o preco do produto: ";
                std::cin >> (preco);
                registrarEntrada(nome, codigo, quantidade, preco);
                break;
            case 2:
                int x;
                std::cout << "Informe o codigo do produto: ";
                std::cin >> (x);
                registrarVenda(x);
                break;
            case 3:
                gerarRelatorio();
                break;
            case 4:
                std::cout << "\nPrograma encerrado!" << std::endl;
                break;
            default:
                std::cout << "\nOpcao invalida!" << std::endl;
                break;
            }
        }while(opcao != 4);
}
