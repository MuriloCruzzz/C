#include <stdio.h>
#include <time.h>
void main(){
  time_t t;
  time (&t);
  struct tm *data;
  data = localtime(&t);
  int ano = data->tm_year + 1900, nasceu;
  printf("Atualmente estamos no ano de %i", ano);  
    printf("Em que ano que voce nasceu?: ");
  fflush(stdin);
  scanf("%i", &nasceu);
  printf("Sua idade atual é de %i anos", ano - nasceu);
  if((ano - nasceu) > 18){
    printf("Voce ja tem mais de 18 anos, espero q tenha se alisatado");
  }else{
    printf("Voce ainda nao tem 18 anos, se prepare p o exercito");
  }
  
  
}