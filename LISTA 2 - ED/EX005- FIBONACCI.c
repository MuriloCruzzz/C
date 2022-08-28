#include <stdio.h>

void main(){
    int n1 = 0, n2 = 1, n3, fim ,i = 0;
    printf("Defina o limite ca contagem: ");
    scanf("%i", &fim);
    printf("%i - %i - ",n1 , n2 );

    while( i < fim - 2){
        n3 = n1 + n2;
        printf("%i - ", n3);
        n1 = n2;
        n2 = n3;
        i++;
    }
    printf("FIM");
}
