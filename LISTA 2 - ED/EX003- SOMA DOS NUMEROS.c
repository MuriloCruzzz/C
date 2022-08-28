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
