#include <stdio.h>
#define TAM_MAX 100


int procuraTodos(int v[], int N, int x, int posicoes[]){

    int count=0;

    for(int i=0; i<N; i++){

        if(v[i]==x){
            posicoes[count]=i;
            count++;
        }
    }

    return count;
}


void imprime_vetor(int v[], int n){

    printf("{");

    for(int i=0; i<n; i++){
     
        printf(" %d", v[i]);
        printf("}\n");
    }

}

int main(){

  int v[TAM_MAX], posicoes[TAM_MAX];
    int N, x, qtd;

    
    printf("Tamanho do vetor (max %d): ", TAM_MAX);
    scanf("%d", &N);

    if (N <= 0 || N > TAM_MAX) {
        printf("Tamanho inválido!\n");
        return 1;
    }

    
    printf("Introduza os %d elementos do vetor:\n", N);

    for(int i=0; i<N; i++){
        scanf("%d", &v[i]);
    }


    printf("Valor a procurar: ");
    scanf("%d", &x);



    qtd=procuraTodos(v,N,x,posicoes);

    printf("\nVetor introduzido: ");
    imprime_vetor(v, N);

    if(qtd==0){

        printf("O valor %d não ocorreu no vetor.\n", x);

    }else{

         printf("O valor %d ocorreu %d vezes nas posições: ", x, qtd);
        imprime_vetor(posicoes, qtd);
    }


    return 0;

}