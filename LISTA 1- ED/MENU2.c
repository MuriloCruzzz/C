#include <stdio.h>
#include <locale.h>
#include <math.h>

void ex1() {
  setlocale(LC_ALL,"Portuguese");  
  float horapaga, horasem;
  float desconto; 
  
  printf("\n\n<<< CÁLCULO SALÁRIO PROGRAMADOR >>>\n\n"); 
  
  printf("Valor pago por hora trabalhada: R$");
  scanf("%f", &horapaga);
  
  printf("Quantas horas trabalhadas na semana: ");
  scanf("%f", &horasem);
  
  printf("Entre com valor do desconto do INSS: ");
  scanf("%f", &desconto);
  float salariob =  (horapaga * horasem) * 4.5;
  float salariol = salariob - (salariob * desconto / 100);
  
  printf("\nSeu salário bruto é R$%.2f\n\nJá seu salário liquido descontando o INSS será de %.2f", salariob, salariol);  

  printf("\n\n-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=-\n\n");
  

} 

void ex2(){
  setlocale(LC_ALL, "Portuguese");
  printf("\n\n<<< MÉDIA PONDERADA >>>\n\n");
  float n1, n2, n3, n4, n5, mp;
  int p1, p2, p3, p4, p5, sp;

  printf("Digite 5 notas separadas por espaço: ");
  scanf("%f%f%f%f%f", &n1, &n2, &n3, &n4, &n5);
  printf("Digite 5 pesos correspondentes: ");
  scanf("%i%i%i%i%i", &p1, &p2, &p3, &p4, &p5);

  sp = p1 + p2 + p3 + p4 + p5;
  mp = (n1 * p1 + n2 * p2 + n3 * p3 + n4 * p4 + n5 * p5);
  
  printf("\nSua media aritimética final será de %.2f: ", mp); 

  printf("\n\n-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=-\n\n");

}

void ex3() {
  setlocale(LC_ALL, "Portuguese");
  printf("\n\n<<< IDENTIFICAÇÃO DOS NÚMEROS >>>\n\n");
  int num;

  printf("Entre com um numero: ");
  scanf("%d", &num);

  if(num > 0){
    printf("\n%i é um número positivo \nportanto sua raiz quadrada será de %.2f", num, sqrt(num));    
  } 
    
  if(num < 0){
  printf("%i é um numero negativo \nportanto %i é seu numero ao quadrado", num, num * num);
  }
    
  if (num == 0){
  printf("O valor que vocè digitou é ZERO");
    }
  
printf("\n\n-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=-\n\n");
}

void ex4(){
  setlocale(LC_ALL, "Portuguese");
  printf("\n\n<<< DISTÀNCIA PERCORRIDA >>>\n\n");
  int vel, temp, dist;
  
  printf("Apresente a velociade do veiculo km/h: ");
  scanf("%i", &vel);
  
  printf("Apresente o tempo percorrido em minutos: ");
  scanf("%i", &temp);
  
  dist = (vel * temp)  / 60;
  printf("A distancia total percorrida sera de %ikm", dist);
  printf("\n\n-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=-\n\n");
  
  
}

void ex5() {
  setlocale(LC_ALL, "Portuguese");
  printf("\n\n<<< VERIFICAR SE É DIVISÍVEL POR 4 E 5 >>>\n\n");

  int num;
  printf("Digite um numero inteiro: ");
  scanf("%i", &num);

  if (num % 4 == 0 && num % 5 == 0)
    printf("O numero %i é divisível por 4 e por 5\n", num);
  
  else if(num % 4 == 0 )
    printf("O numero %i é divisível por 4", num);
  
  else if(num % 5 == 0)
    printf("O numero %i é divisível po 5", num);

  else
    printf("%i não é divisível por 4 e nem po 5", num);

printf("\n\n-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=-\n\n");
    
}

void ex6(){
  setlocale(LC_ALL, "Portuguese");
  printf("\n\n<<< CALCULO EQUAÇÃO SEGUNDO GRAU >>>\n\n");
  
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
    printf("\n\n-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=-\n\n");
    return 0;
  }

  delta = pow(b, 2) - 4 * a * c;
  if(delta < 0){
    printf("\n>>> Não existem raizes reais <<<");
    printf("\n\n-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=-\n\n");
    return 0;
  }
  if (delta == 0){
    x1 = ((-b + sqrt(delta)) / 2 * a);
    printf("A unica raiz é %.2f", x1);
    printf("\n\n-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=-\n\n");
  }
  else{
    x1 = ((-b + sqrt(delta)) / 2 * a);
    x2 = ((-b - sqrt(delta)) / 2 * a);
    printf("As raizes são \nX1 = %.2f \nX2 = %.2f", x1, x2);
  }
printf("\n\n-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=-\n\n");

 
}

void ex7(){
  char letra;
  
  printf("\n\n<<< DECIMAL E HEXADECIMAL DE UM CARACTERE >>>\n\n");  
  printf("Entre com um caractere: ");
  letra = getchar();
  printf("\nA letra \"%c\"\nSeu valor em decimal é %i \nE em "
         "hexadecimal é %x ",
         letra, letra, letra);

  printf("\n\n-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=-\n\n");

  

}

int main(){
  int opcao;

  do{    
    printf("----------");
    printf("\nEXERCIÍCIOS");
    printf("\n----------");
    printf("\n\n1- EX01- CÁLCULO SALÁRIO PROGRAMADOR \n2- EX02- MÉDIA PONDERADA \n3- EX03- IDENTIFICAÇÃO DOS NÚMEROS \n4- EX04- DISTÀNCIA PERCORRIDA \n5- EX05- VERIFICAR SE É DIVISÍVEL POR 4 E 5 \n6- EX06- CALCULO EQUAÇÃO SEGUNDO GRAU \n7- EX07- CÓDIGO DECIMAL E HEXADECIMAL DE UM CARACTERE \n\n0- SAIR\n\n");
scanf("%i", &opcao);


  switch(opcao){
    case 1:
        ex1();            
        break;
    case 2:
        ex2();
        break;
    case 3:
        ex3();
        break;
    case 4:
        ex4();
        break;
    case 5:
        ex5();
        break;
    case 6:
        ex6();
        break;
    case 7:
        ex7();
        break;
    case 0:
        printf("\nSaindo...");
        break;
        return opcao;
    default:
       printf("\n\nOPÇÃO INVÁLIDA!!\n\nSelecione o número corresponde ao exercício desejado\n\n");    
      }
    }while(opcao != 0);

  return 0;
}
