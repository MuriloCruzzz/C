#import <stdio.h>
#import <locale.h>
int main (){
  setlocale(LC_ALL,"Portuguese");
  printf("<<< EX013 - OPERADORES BITWISE >>>\n\n");
  int n1, n2;  
  printf("Digite o primeiro valor: ");
  scanf("%i", &n1);
  printf("Digite o segundo valor: ");
  scanf("%i", &n2);
  printf("----- OPERAÇOES BITWISE -----\n");
  printf("Calculando %i & %i é igual a %i \n", n1, n2, (n1 & n2));
  printf("Calculando %i | %i é igual a %i \n", n1, n2, (n1 | n2));
  printf("Calculando %i ^ %i é igual a %i \n", n1, n2, (n1 ^ n2)); 

  return 0;
}