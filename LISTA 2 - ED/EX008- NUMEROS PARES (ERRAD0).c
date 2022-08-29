#import <stdio.h>

void main(){
  int n1[10], fim, i;
  printf("Defina o limite da contagem: ");
  scanf("%i", &fim);  

  for( i = 1 ; i<= fim; i++ ){
    printf(" \nEscreva o %iº numero: ", i);
    scanf("%i", &n1[i]);   
  }
  for( i = 1 ; i<= fim; i++ ){
    if(n1[i] % 2 == 0 && n1[i] % 4 == 0 && n1[i] % 7 == 0){
      printf("\nNumeros pares que são divisiveis por 4 e 7: ");
      printf("\n%i", n1[i]);      
    }
    else if(n1[i] % 2 == 0 && n1[i] % 4 == 0){
      printf("\nNumeros pares que são divisiveis por 4: ");
      printf("\n%i", n1[i]);      
    } 
    else if (n1[i] % 2 == 0 && n1[i] % 7 == 0){
      printf("\nNumeros pares que são divisiveis por 7:\n");
      printf("\n%i ", n1[i]);      
  }    
 }
}

