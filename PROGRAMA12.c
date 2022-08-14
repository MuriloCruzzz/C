#import <stdio.h>
#import <stdlib.h>
void main(){
    srand(time(NULL));
    printf("ADIVINHE O NUMERO Q ESTOU PENSANDO, ele esta entre 1 e 5: \n");
    int nc = rand() %5 + 1;
    int nj;
    printf("Qual é seu palpite?: ");
    scanf("%i", &nj);
    printf("Eu pensei no numero %i e voce digitou %i", nc, nj);

}
