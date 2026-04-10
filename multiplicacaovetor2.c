#include <stdio.h>
#define TAM 10

float produto(float x[]){

    float multiplicacao=1;

    for(int i=0; i<TAM; i++){
        multiplicacao*=x[i];
    }

    return multiplicacao;

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

    
    printf("\n\nProduto dos elementos = %.2f\n", produto(vetor));

    return 0;
}