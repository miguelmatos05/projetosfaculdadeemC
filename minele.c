#include <stdio.h>
#define TAM 10

float min(float x[]){

        float menor = x[0];  

    for (int i = 1; i < TAM; i++) {
        if (x[i] < menor) {
            menor = x[i];
        }
    }

    return menor;
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

    
    printf("\n\nMenor dos elementos = %.2f\n", min(vetor));

    return 0;
}
