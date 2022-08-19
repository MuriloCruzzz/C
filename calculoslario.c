#include <stdio.h>
#include <locale.h>

int main(void) {
  setlocale(LC_ALL,"Portuguese");  
  float horapaga, horasem;
  float desconto; 
  
  printf("<<< CALCULO SALARIO PROGRAMADOR >>>\n\n");  
  printf("Entre com o valor paga por hora trabalhadas: ");
  scanf("%f", &horapaga);
  printf("Entre com o numero de horas trabalhadas: ");
  scanf("%f", &horasem);
  printf("Entre com valor do desconto: ");
  scanf("%f", &desconto);
  float salariob =  (horapaga * horasem) * 4.5;
  float salariol = salariob - (salariob * desconto / 100);
  
  printf("Seu salario bruto é R$%.2f\n\nja seu salario liquido descontado o INSS sera de %.2f", salariob, salariol);  
  

  return 0;
} 
  