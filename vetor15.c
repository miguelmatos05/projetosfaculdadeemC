#include <stdio.h>


void preencher_vetor(float v[], int n){

    for(int i=0; i<n; i++){
        
        do{
             printf("Digite um numero real positivo para v[%d]: ", i);
            scanf("%f", &v[i]);
            if (v[i] <= 0) {
                printf("Valor invalido! Digite um numero positivo.\n");
            }
        } while (v[i] <= 0);
    }
}


void imprimir_vetor(float v[], int n){

    printf("\n Vetor preenchido\n");
    for(int i=0; i<n; i++){
        printf("%.2f ", v[i]);
    }
    printf("\n");
}

int main(){

    float vetor[15];
    int n;

    do{
        printf("Digite o numero de elementos (maximo 15): ");
        scanf("%d", &n);

        if(n<1 || n>15){
             printf("Valor invalido! Deve estar entre 1 e 15.\n");
        }


    }while(n<1 || n>15);

    preencher_vetor(vetor, n);
    imprimir_vetor(vetor, n);

    return 0;

    
}
