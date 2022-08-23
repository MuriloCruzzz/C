#include <stdio.h>
void main(){
  int ano;
  printf("Em que ano estamos?: ");
  fflush(stdin);
  scanf("%i", &ano);
  if(ano%4==0 && ano%100!=0 || ano%400==0){
    printf("Estamos no ano bisexto");
   }else{
    printf("Nao é ano bisexto");
   }
}