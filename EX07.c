#include <locale.h>
#include <math.h>
#include <stdio.h>

int main(void) {
  setlocale(LC_ALL, "Portuguese");
  printf("\n\n<<< CÓDIGO DECIMAL E HEXADECIMAL DE UM CARACTERE >>>\n\n");

  char l1;
  printf("Entre com um caractere: ");
  l1 = getchar();

  printf("\nVocê entrou com a letra \"%c\"\nSeu valor em decimal é %i \nE em "
         "hexadecimal é %x ",
         l1, l1, l1);
  printf("\n\n\n--------------");
  printf("\n^^ PARABÉNS ^^");
  printf("\n--------------");

  return 0;
}