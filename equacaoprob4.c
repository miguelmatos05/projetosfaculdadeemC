#include <stdio.h>
#include <math.h>

int main() {
  
  float a,b,c;
  float x1, x2;
  float delta;

  printf("Digite um valor para a\n");
  scanf("%f", &a);

  if (a == 0) {
        printf("Isso não é uma equação do segundo grau (a não pode ser zero).\n");
        return 1;
    }

  printf("Digite um valor de b\n");
  scanf("%f", &b);

  printf("Digite um valor de c\n");
  scanf("%f", &c);

  delta = b * b - 4 * a * c;

  if (delta < 0) {
        printf("A equação não possui raízes reais.\n");
    } else {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);

   printf("x1,x2 == %.2f,%.2f\n", x1, x2);
   return 0;

    }

}