#include <stdio.h>
#include <math.h>

long int fatorial(int n){

    long int fat=1;

    for(int i=1; i<=n; i++){
        
        fat*=i;
    }

    return fat;
}


float seno(float x, float tolerancia, int *termos){

    float soma = 0.0;
    float termo;
    int n = 0;

    do{


    termo=pow(-1, n) * pow(x, 2*n + 1) / fatorial(2*n + 1);

    if(fabs(termo)>=tolerancia){

        soma += termo;

        
    }

    n++;
    (*termos)++;


    }while (fabs(termo) >= tolerancia);

    return soma;
}


int main(){

    float x, tolerancia;
    int termos;

    printf("Qual o valor de X?");
    scanf("%f", &x);

    printf("Qual a tolerância?");
    scanf("%f", &tolerancia);

    printf("O seno %.2f e %.6f\n", x,seno(x,tolerancia, &termos));
    printf("Número de termos utilizados: %d\n", termos);


    return 0;

}



