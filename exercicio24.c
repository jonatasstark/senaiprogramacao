#include <stdio.h> // biblioteca usada para os comandos de entrada printf e saída scanf

int main() { // funçao main que faz parte do programa principal
    int x = 10; // declarada uma variavel int "x" de valor 10
    int y = 20; // declarada uma variavel int "y" de valor 20
    int resultado = 0; // criada uma variavel int resultado de valor 0

    /* Loop para somar os números de x até y */
    int i; // declarada uma variavel "i" do tipo int
    for (i = x; i <= y; i++) { // loop FOR com uma variavel int i que começa com 10 e vai até 20 de 1 em 1
        resultado += i; // incrementa os valores de "i" somando todos eles e guarda o resultado na variável "resultado"
    } // fim do loop

    printf("A soma dos numeros de %d ate %d e: %d\n", x, y, resultado); // mostra na tela a soma dos valores entre 10 e 20 que é 165

    return 0; // retorna o valor 0 (verdadeiro) e encerra o programa
} // fim do programa principal
