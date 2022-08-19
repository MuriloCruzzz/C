#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(void) {
  setlocale(LC_ALL, "Portuguese");
  printf("<<< VERIFICAR SE É DIVISÍVEL POR 4 E 5 >>>\n\n");

  int num;
  printf("Digite um numero inteiro: ");
  scanf("%i", &num);

  if (num % 4 == 0 && num % 5 == 0)
    printf("O numero %i é divizível por 4 e por 5\n", num);
  
  else if(num % 4 == 0 )
    printf("O numero %i é divizível por 4", num);
  
  else if(num % 5 == 0)
    printf("O numero %i é divizível po 5", num);

  else
    printf("%i não é divizível por 4 e nem po 5", num);
    
  return 0;
}
