#include <stdio.h>

int main(void) {

  printf("\t===============");
  printf("\n\tSOMA DE VALORES");
  printf("\n\t===============");
  int n1, s;

  while(n1 != 0 ){
    printf("\n\nDigite um numero para ser somado: ");
    scanf("%i", &n1);
    if( n1 != 0){
    s = s + n1;
    printf("\nTOTAL: %i \n", s);
    printf("\n\t--- Digite 0 para finalizar ---");
    }else{
    printf("\nPrograma finalizado\n\n");
    }
    //printf("\nSomando fica = %i", s);
  }
  return 0;
}


//----------------------murilo------------//
/* //#include<stdio.h>

int main(){


    int numero_1 = 1, numero_2 = 1, resultado_soma, i;

    printf("Entre com dois numeros para somá-los, só não entre com 0 [zero] \npois fechará o programa !!!\n");

    for (i=0;; i++){
        printf("Entre com um numero: ");
        scanf("%d", &numero_1);
        if (numero_1 != 0 && numero_2 != 0){
        printf("Entre com o outro numero: ");
        scanf("%d", &numero_2);
        }
        else {
            printf("Você digitou 0 [ZERO] - Sistema fechou!");
            return 0;
        }
        if (numero_1 != 0 && numero_2 != 0){
        resultado_soma = (numero_1 + numero_2);
        }
        else {
            printf("Você digitou 0 [ZERO] - Sistema fechou!");
            return 0;
        }
        printf("A soma de %d + %d e = %d \n", numero_1,numero_2, resultado_soma);
        }
} */
