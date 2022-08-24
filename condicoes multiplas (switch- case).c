#include <stdio.h>

void main(){
  int n;
  printf("Escolha um numero: ");
  fflush(stdin);
  scanf("%i", &n);
  switch(n){
    case 1:
      printf("um");
      break;
    case 2:
      printf("dois");
      break;
    case 3:
      printf("tres");
      break;
    case 4:
      printf("quatro");
      break;
    default:
      printf("ERRO");
      break;
    }
  printf("...");
}