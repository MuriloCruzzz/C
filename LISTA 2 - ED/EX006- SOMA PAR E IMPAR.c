#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    int n, ni = 0, np = 0, i = 1;

    for(i >= 1; i <= 12; i++){
    printf("Digite o %iº numero: ", i);
    scanf("%i", &n);

    if(n % 2 == 0  ){
        np = np + n;

    }else{
        ni = ni + n;
         }
    }
    printf("\nSoma par eh: %i", np);
    printf("\nSoma impar eh: %i: ", ni);

}

