#import <stdio.h>
#import <locale.h>
void main(){
    setlocale(LC_ALL, "Portuguese");
    printf("Qual é seu nome? : ");
    char nome[20];
    gets(nome);
    fflush(stdin); //limpar buffer
    printf("Quantos anos voce tem?: ");
    int idade;
    scanf("%i", &idade);
    printf("Qual é seu peso?: ");
    float peso;
    scanf("%f", &peso);
    printf("\n--------<<<PROCESSANDO>>>--------\n");
    printf("Seu nome é %s, tem %i anos, e pesa %.2fkg\nFIM", nome, idade, peso);
}
