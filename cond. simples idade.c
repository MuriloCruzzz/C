#include <stdio.h>
#include <time.h>
void main(){
  time_t t;
  time (&t);
  struct tm *data;
  data = localtime(&t);
  int a = data->tm_year + 1900, ano, idade;

  printf("Em que ano voce nasceu?: ");
  scanf("%i", &ano);
  idade = a - ano;

  if(idade >=70){
  printf("Voce tem %i anos de idade, por favor dirija-se a fila preferencial", idade);
    }
  printf("Seja bem vindo");
}