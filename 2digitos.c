#include <stdio.h>
#include <stdlib.h>

int main(){

int numero;

scanf("%d", &numero);

if(abs(numero)>=10 && abs(numero)<=99){
    printf("O número tem 2 digítos.\n");

}

else{
    printf("O número não tem dois digítos.\n");
    
}

return 0;

}


