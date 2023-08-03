#include <stdio.h>

int main(){
    int i,n;
    int soma = 0;
    printf("digite um numero: ");
    scanf("%d", &n);
    for(i=0; i <= n; i++){
        soma += i; // soma = soma + i
    }
    printf("a soma dos numeros de 0 a %d eh %d\n", n, soma);
    return 0; // a sintaxe correta é return
}
