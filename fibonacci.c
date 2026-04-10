#include <stdio.h>


void fibonacci_termos(int a, int b, int n){

    if(n==0)
    return;



    printf("%d ", a);
    fibonacci_termos(b,a+b,n-1);

}

void fibonacci_valor_maximo(int a, int b, int max){


    if(a>max)
        return;
    
    printf("%d", a);
    fibonacci_valor_maximo(b, b+a, max);

}

int main(){

    int opcao;
    int maxvalor;
    int n;


    printf("Pretende usar numero maximo de valores(1) ou valor maximo(2)?\n");
    scanf("%d", &opcao);

    if(opcao==1){

        printf("Introduza um numero maximo de valores: \n");
        scanf("%d", &n);

        printf("Sequencia: \n");
        fibonacci_termos(0,1,n);
        printf("\n");


    }else if(opcao==2){

        printf("Introduza o valor maximo: \n");
        scanf("%d", &maxvalor);


        printf("Sequencia:");
        fibonacci_valor_maximo(0,1,maxvalor);
        printf("\n");

    }else{
        printf("Opção inválida!");
    }

    return 0;

}