#include <stdio.h>
#include <math.h>

int main(){

float a,b,c;
int opcao;

printf("===Teorema de Pitágoras===.\n");
printf("Escolha o que deseja calcular:\n");
printf("1 - Calcular a hipotenusa (c).\n");
printf("2 - Calcular um dos catetos (a ou b).\n");
printf("Opção: ");
scanf("%d", &opcao);

if (opcao==1){
   printf("Introduza o valor do cateto a:\n");
   scanf("%f", &a);

   printf("Introduza o valor do cateto b:\n");
   scanf("%f", &b);

   if(a<=0 || b<=0){
      printf("Nenhum dos catetos pode ser menor ou igual a zero.\n");
      return 1;
   }

   c=sqrt(a*a+b*b);
   printf("O valor do hipotenusa é c==%.2f\n", c);
}

else if(opcao==2){
   printf("Digite o valor da hipotenusa c: ");
   scanf("%f", &c);

   printf("Digite o valor do cateto que possui: ");
   scanf("%f", &a);

   if(c<=0 || a<=0 || c<=a){
      printf("A hipotenusa tem de ser maior do que o cateto e ambos tem que ser maior do que 0.\n");
      return 1;
   }

   b=sqrt(c*c-a*a);
   printf("O valor do cateto é: %.2f", b);
}

else{
  printf("Opção Inválida.\n");

}

return 0; 

}




