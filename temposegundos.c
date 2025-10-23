#include <stdio.h>

int main(){

long totalSegundos,s;
int d,h,m,s2;

printf("Quantos segundos?");
scanf("%ld", &totalSegundos);

s=totalSegundos;

d=s/86400;
s%=86400;

h=s/3600;
s%=3600;

m=s/60;
s2=s%60;

printf("%ld segundos correspondem a %d dias, %d horas, %d minutos, %d segundos\n", totalSegundos,d,h,m,s2);

return 0;

}


