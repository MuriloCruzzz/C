#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(void) {
  setlocale(LC_ALL, "Portuguese");
  printf("<<< IDENTIFICAÇÃO DOS NÚMEROS >>>\n\n");
  int num;

  printf("Entre com um numero: ");
  scanf("%d", &num);

  if(num > 0){
    printf("\n%i é um número positivo \nportanto sua raiz quadrada será de %.2f", num, sqrt(num));    
  } 
    
  if(num < 0){
  printf("%i é um numero negativo \nportanto %i é seu numero ao quadrado", num, num * num);
  }
    
  if (num == 0){
  printf("O valor que vocè digitou é ZERO");
    }
   
  return 0;
}
