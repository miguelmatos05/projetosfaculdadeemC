#include <stdio.h>

int main(){

  float c,k,f;

  printf("Qual a temperatura?");
  scanf("%f", &c);

  k=c+273.15;
  f=(c*9/5)+32;

  printf("%f = %.2f ", c,k);
  printf("%f = %.2f", c, f);

  return 0;

}


