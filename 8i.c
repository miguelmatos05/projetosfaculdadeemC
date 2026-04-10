#include <stdio.h>


void contaVezes(int num, int dig, int *ptr_vezes){

    *ptr_vezes=0;

    if(dig<0 || dig>9){
        return;
    }

    if(num<0){
        num=-num;
    }

    while(num>0){

        if(num%10==dig){
        
          (*ptr_vezes)++;
        }

        num /=10;
    }
}

int main(){

    int digito, numero;
    int vezes;

    scanf("%d", &numero);
    scanf("%d", &digito);

   contaVezes(numero, digito, &vezes);


    printf("O digito %d aparece %d vezes no numero %d.\n", digito, vezes, numero);
    
    
    return 0;
}