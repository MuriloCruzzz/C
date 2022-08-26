#include <stdio.h>
int main(){
  printf("-- MENOR E MAIOR NUMERO --\n\n");
  float n, maior, menor;
  int i;
  for(i = 1; i <= 12; i++){
  printf("Digite o %i numero: ", i);
  scanf("%f", &n);
  if(i == 1){
    maior = n;
    menor = n;
  }else{
    if(n > maior){
      maior = n;
    }else{
      if(n < menor){
        menor = n;
      }
    }
    
  }
}
printf("\nMenor numero é: %.f", menor);
printf("\nMaior numero é: %.f: ", maior);  
  return 0;
}