#include <stdio.h>

int main(){

float num;
int arredondado, ParSuperior, ParInferior;

printf("Insira um número: ");
scanf("%f", &num);

if(num >= 0){
    arredondado = (int)(num+0.5);
    
}
else{
    arredondado=(int)(num-0.5);
}

if(arredondado % 2 == 0){
    
  ParInferior = arredondado - 2;
  ParSuperior = arredondado + 2;
}
else{
    ParInferior = arredondado - 1;
    ParSuperior = arredondado + 1;
}

printf("%d, %d", ParInferior, ParSuperior);

return 0;



}

