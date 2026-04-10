#include <stdio.h>

int main(){

float c,l;

printf("Altura?");
scanf("%f", &l);

printf("Largura?");
scanf("%f", &c);


if(c==l){

 printf("O retângulo é um quadrado.\n");
}

else{
 printf("O retângulo não é um quadrado.\n");
}

return 0;

}


