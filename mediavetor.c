#include <stdio.h>
#define TAM 10


float avg(float x[]){

     float soma=0;
     float contador=0;

    for(int i=0; i<TAM; i++){
        soma+=x[i];
        contador++;
    }

    float media=soma/contador;

    return media;
}

int main(){

     float vetor[TAM];

    for (int i = 0; i < TAM; i++) {
        printf("Introduza o numero %d: ", i + 1);
        scanf("%f", &vetor[i]);
    }

    printf("\nConteudo do vetor:\n");
    for (int i = 0; i < TAM; i++) {
        printf("%.2f ", vetor[i]);
    }

    
    printf("\n\nMédia dos elementos = %.2f\n", avg(vetor));

    return 0;
}
