#import <stdio.h>

int main(){
    int num1;
    float num2;
    printf("Escreva um numero inteiro: ");
    scanf("%i", &num1);
    printf("Escreva um numero real: ");
    scanf("%f", &num2);
    printf("Voce digitou %i como numero inteiro, e %.2f como numero real", num1, num2);

    return 0;
}
