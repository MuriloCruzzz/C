#include <stdio.h>

int main(void) {
  float i, j, r, soma;
  for(i = 1, j = 1; /*i <= 99,*/ j <= 50; i = i +2, j = j+1){
    r = i / j;
    printf("%.3f\n", r);
    soma = soma + r;    
  }
  printf("\nTOTAL= %.3f", soma);
  
  return 0;
  }



/*float i = 1, j = 1,  r = 0;
  for(j = 1; i <= 50; i++, i + 2){
  r += (i / j);
  }
  printf("%.f", r);*/




/*int main(void) {
  float i, j, r;
for(i = 1, j = 1; i <= 99, j <= 50; (i = i +2, j = j + 1)){
    //printf("%.f/%.f\n", i, j);
    r = i / j;
    printf("%f\n", r);
  }
  return 0;
  }*/




/*for(i = 1, j = 1; i <= 50; i++){
    j = j +2;
    r = r + ( j / i);  */


/*for(i = 1, j = 1; i <= 99, j <= 50; (i = i +2, j = j + 1)){
    //printf("%.f/%.f\n", i, j);
    r = (i / j);
    printf("%f\n", r);
  }*/
  






