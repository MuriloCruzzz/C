#include <stdio.h>

int main(void) {
  printf("=========TABELA DE PRECOS=========");
  printf("\nViagens ate 200Km\t\tR$0,50/Km");
  printf("\nViagens acima de 200Km\tR$0,35/Km");
  printf("\n----------------------------------");
  float d1;

  printf("\n\nDistancia total da viagem: ");
  scanf("%f", &d1);
  
  if(d1 > 200){
    printf("Uma viagem acima de 200km vai custar R$0,35/Km.");
    printf("\nValor total: R$%.2f", d1 * 0.35);
  }else{
    printf("Uma viagem até 200km vai custar R$0,50/Km.");
    printf("\nValor total: R$%.2f", d1 * 0.5);    
  }
  return 0;
}