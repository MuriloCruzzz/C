#import <stdio.h>
#import <locale.h>
int main(){
  setlocale(LC_ALL,"Portuguese");
  printf("<< EX011 - PAR OU IMPAR >>\n\n");
  int n;
  printf("Digite um nimero: ");
  scanf("%i", &n);
  printf("O numero que voce digitou é %s", (n%2)?"impar":"par");
  return 0;
}
