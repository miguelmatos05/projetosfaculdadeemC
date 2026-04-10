#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LANCAMENTOS 30
#define FACES 6

int main() {
    int vetor[LANCAMENTOS];
    int contagem[FACES] = {0};
    int i;

    
    srand(time(NULL));

    
    for(i = 0; i < LANCAMENTOS; i++){
        vetor[i] = (rand() % 6) + 1;  
        contagem[vetor[i] - 1]++;     
    }

    
    printf("Histograma dos lancamentos do dado:\n\n");

    for(i = 0; i < FACES; i++){
        printf("Face %d (%2d vezes): ", i + 1, contagem[i]);

        
        for(int j = 0; j < contagem[i]; j++){
            printf("*");
        }

        printf("\n");
    }

    return 0;
}