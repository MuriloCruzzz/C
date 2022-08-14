#import <stdio.h>
#import <locale.h>

void main(){
    setlocale (LC_ALL, "Portuguese");
    printf("Listagem de alunos \n");
    printf("Nome\t\tNota\n");
    printf("-----------------------\n");
    printf("Ana Beatriz\t8,5\n");
    printf("Bianca Martins\t9,5\n");
    printf("Claudio de sá\t5,5\n");
    printf("Giovana Silva\t7,5\n");
    printf("-----------------------\n");
}
