#include <stdio.h>

void menu(){
  printf("----------");
  printf("\nEXERCICIOS");
  printf("\n----------");
  printf("\n\n1- EX01 \n2- EX02 \n3- EX03 \n4- EX04 \n5- EX05 \n6- EX06 \n7- EX07");
  printf("\n\n\t>> 8- SAIR <<\n\n");
  printf("Digite o número do exercicio: ");
}

int ler_opcao(){
  int op;
  int valido = 0;
    while(valido == 0){
      scanf("  %i", &op);
      switch(op){
          case 1:
          case 2:
          case 3:
          case 4:
          case 5:
          case 6:
          case 7:
          case 8:
              return op;
          default:
              printf("\n\nOPÇÃO INVÁLIDA!!\n\nSelecione o numero corresponde ao exercicio desejado\n\n");
              menu();
        }  
    }
  
}


  int main(){
    int op;
    menu();
    op = ler_opcao();
    printf("O exercicio escolhido foi %i", op);
    

    
  return 0;
}