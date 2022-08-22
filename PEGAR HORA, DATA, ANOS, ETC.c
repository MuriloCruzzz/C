#include <stdio.h>
#include <time.h>
void main(){
  time_t t;
  time (&t);
  struct tm *data;
  data = localtime(&t);
  int d = data->tm_mday;
  int m = data->tm_mon + 1;
  int a = data->tm_year + 1900;

  printf("Estamos no dia %i de %i de %i", d, m, a);
}

//tm_mday - dia do mes (0 - 31)
//tm_mon - mes (0 - 11)
//tm_year - ano (0 a partir e + 1900)
//tm_wday - semana (0 domingo -6sexta-feira)
//tm_yday - dia do ano (0 - 365 ou 366(ano bixesto))
//tm_hours - hora(0 -23)
//tm_min - minuto (0- 59)
//tm_sec - segundo (0 - 59)