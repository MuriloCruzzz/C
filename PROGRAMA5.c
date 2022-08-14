#import <stdio.h>

void main(){
    char nome[30];
    char cidade[30];
    printf("Escreva seu nome: ");
    gets(nome);
    printf("Cidade que voce nasceu: ");
    gets(cidade);
    printf("Seu nome eh \"%s\" que nasceu na cidade de \"%s\"", nome, cidade);
}
