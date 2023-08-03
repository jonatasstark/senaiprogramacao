#include <stdio.h>
int main(){
    int x;
    int i;
    int total = 0;
    printf("Digite um numero: ");
    scanf("%d", &x);
    for (i = 1; i <= x; i++){
        if (x % i == 0){
            printf("%d ", i);
            total++;
        }
    }
    if (total == 2){
        printf("\nO numero digitado eh primo!");
    } else {
        printf("\nO numero digitado nao eh primo!");
    }


    return 0;
}
