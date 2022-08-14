#import <stdio.h>

void main(){
    char l1;
    char l2;
    printf("Escreva uma aletra: ");
    fflush(stdin);
    l1 = getchar();
    printf("Digite outra letra: ");
    fflush(stdin);
    l2 = getchar();
    printf("A primeira letra que voce digitou foi \"%c\", e a segunda foi \"%c\"", l1, l2);
}
