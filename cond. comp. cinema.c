#include <stdio.h>
#include <time.h>

void main(){
   time_t t;
   time (&t);
   struct tm *data;
   data = localtime(&t);
   int h = data->tm_hour, inicio = 14;
   float din, preco = 20;

   printf("================CINEMA ESTUDONAUTA================");
   printf("\nHorario do filme: %ih - PRECO DO INGRESSO %.2f", inicio, preco);
   printf("\n-------------------------------------------------");
   printf("\nHoara atual: %i", h);

   printf("\nQanto dinheiro voce tem?: ");
   fflush(stdin);
   scanf("%f", &din);
   
   if(din >= preco && h < inicio){
      printf("Voce consegue comprar o ingresso, seja bem vindo");
   }else
   printf("Infelizmente não é possivel comprar o ingresso! Volte outro dia!");

}