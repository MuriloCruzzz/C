#include <stdio.h>
#include <locale.h>
//\n
void main(){
    setlocale(LC_ALL, "Portuguese");
    float nota, mf;
    int i;
    for(i = 1; i <= 5; i++){
       printf("Digite a %i nota: ", i);
       scanf("%f",&nota);
       mf = mf + nota;

    //printf("A média do aluno é de: %f", mf/5);
    }
    if((mf / 5 )< 6 )
        printf("\nO aluno ficou com media %f\nPortanto ele(a) esta REPROVADO(A)\n\n", mf/5);
    else if (mf >= 6)
        printf("\nO aluno ficou com media %f\nPortanto ele(a) esta APROVADO(A)\n\n", mf/5);
    }




