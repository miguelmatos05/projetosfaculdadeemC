#include <stdio.h>
#define TAM 10

float max(float x[]){

        float maior = x[0];  

    for (int i = 1; i < TAM; i++) {
        if (x[i] > maior) {
            maior = x[i];
        }
    }

    return maior;
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

    
    printf("\n\nMaior dos elementos = %.2f\n", max(vetor));

    return 0;
}
