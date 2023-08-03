#include <stdio.h>
int main() {
    float media, num1, num2, num3;

    printf("digite um numero ");
    scanf("%f", &num1);
    printf("digite um numero ");
    scanf("%f" , &num2);
    printf("digite um numero ");
    scanf("%f", &num3);

    media = (num1 + num2 + num3)/3.0;

    printf("a media eh: %.3f ", media);

    return 0;

}