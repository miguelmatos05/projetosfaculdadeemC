#include <stdio.h>
#include <math.h>

int main(){

float a;

printf("Insira um número: ");
scanf("%f", &a);

printf("O número com 3 casas decimais = %.3f\n", a);
printf("A parte inteira %d\n", (int)a);
printf("Parte decimal = %.3f\n", fabs(a-(int)a));

return 0;

}


