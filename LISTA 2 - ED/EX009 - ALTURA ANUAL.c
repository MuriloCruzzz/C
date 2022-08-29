#include<stdio.h>

void main(){
  int ano = 0;
  float j = 1.35, r = 1.07;
  
  while(r < j){  
  j = j + 0.02;
  r = r + 0.03;
  ano++;
  }
  printf("Vai demorar %i anos para que Josevaldo ser maior que Rafonildo", ano);
  }
