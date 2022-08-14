#import <stdio.h>
#import <stdlib.h>

void main(){
    srand(time(NULL));
    int n = rand() %10; //gera um numero aleatorio de 0 a 1
    printf("O numero escolhido foi %i", n);
}
