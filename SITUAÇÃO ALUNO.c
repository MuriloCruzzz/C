#import <locale.h>
#import <stdio.h>
int main() {
  setlocale(LC_ALL, "Portuguese");
  printf("<< EX012 - SITUAÇÃO DO ALUNO >>\n\n");
  float n1, n2;
  char m;
  printf("Primeira nota: ");
  fflush(stdin);
  scanf("%f", &n1);
  printf("Segunda nota: ");
  fflush(stdin);
  scanf("%f", &n2);
  m = ((n1 + n2) / 2);
  printf("A situação é %s jovem padawan", (m >= 6) ? "APROVADO" : "REPROVADO");

  return 0;
}