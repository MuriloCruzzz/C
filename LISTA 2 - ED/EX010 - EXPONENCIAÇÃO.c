#include <stdio.h>

void main(){
  
  printf(">>> CÁLCULO EXPONENCIACÃO <<<\n\n");
  
  int b, x, result = 1 , i = 0;
  printf("Digite o vaLor da base: ");
  scanf("%i", &b);
  printf("Digite o vaLor do expoente: ");
  scanf("%i", &x); 
  
  while( i != x){
    result = result * b;
    i++ ;   
    }
  printf("Resultado de %i elevado a %i: %i", b, x, result);
}