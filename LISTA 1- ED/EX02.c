#include <stdio.h>
#include <locale.h>

int main(void) {
  setlocale(LC_ALL, "Portuguese");
  printf(" <<< MÉDIA ARITMÉTICA >>>\n\n");
  float n1, n2, n3, n4, n5, mf;

  printf("Digite o primeiro valor: ");
  scanf("%f", &n1);
  
  printf("Digite o segundo valor: ");
  scanf("%f", &n2);
  
  printf("Digite o terceiro valor: ");
  scanf("%f", &n3);
  
  printf("Digite o quarto valor: ");
  scanf("%f", &n4);
  
  printf("Digite o quinto valor: ");
  scanf("%f", &n5);

  mf = (n1 + n2 + n3 + n4 + n5) / 5;
  printf("\nSua media final será de %.2f: ", mf);
  scanf("%f", &mf);
  
  return 0;
}