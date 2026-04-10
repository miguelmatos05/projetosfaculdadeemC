#include <stdio.h>

int *vmaior(int *valor1, int *valor2){

    if(*valor1 > *valor2){

        return valor1;

    }else{
        return valor2;
    }
}

int main(){

  int a,b;

  printf("Insira dois valores: ");
  scanf("%d %d", &a, &b);

  printf("Endereço das variáveis: %p %p\n", (void*)&a, (void*)&b);

    int *maior = vmaior(&a, &b);

  printf("Endereço do maior: %p\n", (void*)maior);
  printf("Valor: %d\n", *maior);



return 0;

}