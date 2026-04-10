#include <stdio.h>


int divisao(int dividendo, int divisor, int *quociente, int *resto){

    if(divisor==0){
        return 0;
    }

    int q=0;
    int sinal=1;

    if(dividendo<0){
        dividendo=-dividendo;
        sinal=-sinal;

    }

    if(divisor<0){

        divisor=-divisor;
        sinal=-sinal;
    }

    while(dividendo>=divisor){

        dividendo-=divisor;
        q++;
    }

    *quociente= q*sinal;
    *resto= dividendo;

    return 1;


}


int main(){


int dividendo,divisor;
int resto, quociente;
int resultado;


printf("Digite o dividendo:");
scanf("%d", &dividendo);

printf("Digite o divisor");
scanf("%d", &divisor);

resultado=divisao(dividendo, divisor, &quociente, &resto);

if(resultado==0){
    printf("Erro: Divisor igual a zero!");

}else{
    printf("Quociente: %d\n", quociente);
    printf("Resto. %d\n", resto);
}

return 0;

}