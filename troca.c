#include <stdio.h>

int main(){

float a,b;

printf("Insira um número para variável 1: ");
scanf("%f", &a);

printf("Insira um número para a variável 2: ");
scanf("%f", &b);


a=a+b;
b=a-b;
a=a-b;

printf("Valor da variável 1 após a troca: %f\n", a);
printf("Valor da variável 2 após a troca: %f\n", b);

return 0;

}




