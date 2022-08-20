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
            break;
          case 2:
            break;
          case 3:
            break;
          case 4:
            break;
          case 5:
            break;
          case 6:
            break;
          case 7:
            break;
          case 8:
            exit(0);
            break;
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
    printf("O usuário escolheu o exercicio %i", op);
    

    
  return 0;
}
