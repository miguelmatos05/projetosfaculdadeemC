#include <stdio.h>
#define TAM 15


void vetor(double x[], int n){

    double valor;

    printf("Introduza o elemento %d: ", n+1);
    scanf("%lf", &valor);

    x[n]=valor;

    printf("Vetor:{ ");

    for(int i=0; i<=n; i++){
        printf("%.1f", x[i]);
        if(n<i) printf("");
    }

    printf("}\n");

}


int main(){

  double x[TAM];


    for(int i=0; i<TAM; i++){

        vetor(x,i);
        
    }

    return 0;

}