#include <stdio.h>
#include <locale.h>

int main(){
  setlocale(LC_ALL, "Portuguese");
  printf(" <<< MÉDIA PONDERADA >>>\n\n");
  float n1, n2, n3, n4, n5, mp;
  int p1, p2, p3, p4, p5, sp;

  printf("Digite 5 notas separadas por espaço: ");
  scanf("%f%f%f%f%f", &n1, &n2, &n3, &n4, &n5);
  printf("Digite 5 pesos correspondentes: ");
  scanf("%i%i%i%i%i", &p1, &p2, &p3, &p4, &p5);

  sp = p1 + p2 + p3 + p4 + p5;
  mp = (n1 * p1 + n2 * p2 + n3 * p3 + n4 * p4 + n5 * p5);
  
  printf("\nSua media aritimética final será de %.2f: ", mp);
    
  return 0;
}
