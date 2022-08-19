#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(void) {
  setlocale(LC_ALL, "Portuguese");
  printf("<<< DISTÀNCIA PERCORRIDA >>>\n\n");
  int vel, temp, dist;
  
  printf("Apresente a velociade do veiculo km/h: ");
  scanf("%i", &vel);
  
  printf("Apresente o tempo percorrido em minutos: ");
  scanf("%i", &temp);
  
  dist = (vel * temp)  / 60;
  printf("A distancia total percorrida sera de %ikm", dist);
  
  return 0;
}
