#include <stdio.h>

int main(){

    int x,centenas,dezenas,unidades;

    printf("Insira um número de 3 dígitos: ");
    scanf("%d", &x);


centenas=x/100;
dezenas=(x/10)%10;
unidades=x%10;

if(centenas==unidades){
    printf("O número é capicua.\n");
}

else{
    printf("O número não é capicua.\n");
}

return 0;

}