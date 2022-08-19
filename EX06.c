#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(void) {
  setlocale(LC_ALL, "Portuguese");
  printf("<<< CALCULO EQUAÇÃO SEGUNDO GRAU >>>\n\n");
  
  /////////////////////////////////////////
  //calculo ax² + bx + c = 0             //             
  // delta = b² - 4 * a * c              //     
  // a != 0                              //                 
  //delta < 0 nao existe raiz real       //
  //delta = 0 exibe somente 1 raiz unica //
  /////////////////////////////////////////
  
  float a, b, c, delta, x1, x2;
  
  printf("Digite o valor de A: ");
  scanf("%f", &a);
  
  printf("Digite o valor de B: ");
  scanf("%f", &b);
  
  printf("Digite o valor de C: ");
  scanf("%f", &c);

  if (a == 0){
    printf("Não é uma equação de segundo grau");
    return 0;
  }

  delta = pow(b, 2) - 4 * a * c;
  if(delta < 0){
    printf("\n>>> Não existem raizes reais <<<");
    return 0;
  }
  if (delta == 0){
    x1 = ((-b + sqrt(delta)) / 2 * a);
    printf("A unica raiz é %.2f", x1);       
  }
  else{
    x1 = ((-b + sqrt(delta)) / 2 * a);
    x2 = ((-b - sqrt(delta)) / 2 * a);
    printf("As raizes são %.2f e %.2f", x1, x2);
  }
    
  return 0;
}

//PROFESSOR NAO LEMBRAVA COMO CALCULAVA, TIVE QUE PESQUISAR NA INTERNET
// REFERENCIA: https://www.google.com/amp/s/mundoeducacao.uol.com.br/amp/matematica/tres-passos-para-resolver-uma-equacao-segundo-grau.htm