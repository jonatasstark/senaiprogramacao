#include <stdio.h>

int soma(int a, int b){
    return a + b;
}
int subtracao(int a, int b){
    return a - b;
}
int multiplicacao(int a, int b){
    return a * b;
}
float divisao(int a, int b){
    return (float) a / b;
}
int main(){
    int resultadosoma;
    int resultadosub;
    int resultadomult;
    float resultadodiv;
    float num1;
    float num2;

    printf("Digite um numero: ");
    scanf("%f", &num1);
    printf("Digite outro numero: ");
    scanf("%f", &num2);

    resultadosoma = soma(num1, num2);
    resultadosub = subtracao(num1, num2);
    resultadomult = multiplicacao(num1, num2);
    resultadodiv = divisao(num1, num2);

    printf("\nA soma eh: %d", resultadosoma);
    printf("\nA subtracao eh: %d", resultadosub);
    printf("\nA multiplicacao eh: %d", resultadomult);
    printf("\nA divisao eh: %.2f", resultadodiv);

    return 0;
}
