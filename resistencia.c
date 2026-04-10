#include <stdio.h>

int main(){

  float R1,R2,Rs,Rp;

  printf("Valor de R1 (em ohm)?\n");
  scanf("%f", &R1);

  printf("Valor de R2 (em ohm)?");
  scanf("%f", &R2);

  Rs=R1+R2;

  Rp=(R1*R2)/(R1+R2);

  printf("A resistencia equivalente em série: %.4f ohm\n", Rs);
  printf("A resistencia equivalente em paralelo: %.4f ohm\n", Rp);

  return 0;

}