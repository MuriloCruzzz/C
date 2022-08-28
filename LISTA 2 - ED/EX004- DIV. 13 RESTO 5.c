#import <stdio.h>

void main(){
    int n1, div =13, i;
    for (n1 = 1000 ; n1 <=1999; n1++){
        if( n1 % div == 5 )
        printf("numeros divisiveis por 13 com resto 5: %i\n ",n1);

    }
}

