#include <stdio.h>
void main() {
  float n1, n2, mf;
  printf("Digite a primeira nota: ");
  fflush(stdin);
  scanf("%f", &n1);
  printf("Digite a segunda nota: ");
  fflush(stdin);
  scanf("%f", &n2);
  mf = (n1 + n2) / 2;
  if(mf >= 6){
    printf("PARABÉNS ");
  }printf("Sua media final foi de %.2f, continue estudando!!", mf);
   
}