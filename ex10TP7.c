#include <stdio.h>


int pos(int x, int y, int tamanho) { 
    return x + y * tamanho; 
}

void imprimeMatriz(int matriz[], int N){

    for(int y=0; y<N;y++){
        for(int x=0; x<N; x++){
            printf("%4d ", matriz[pos(x, y, N)]);
        }

        printf("\n");
    }
}


void produtoEscalar(int matriz[], int N, int escalar){

    for(int i=0; i<N*N; i++){
        
        matriz[i]*=escalar;
    }
}

void multMatrizes(int matriz[], int mult[], int resultado[], int N){


    for (int y = 0; y < N; y++) {
        int soma = 0;
        for (int x = 0; x < N; x++) {
            soma += matriz[pos(x, y, N)] * mult[x];
       }

       resultado[y] = soma;
    }
}


int main(){

    int N;
    int matriz[100];      
    int mult[10];     
    int resultado[10];

    printf("Introduza o valor de N (N <= 10): ");
    scanf("%d", &N);


    printf("Introduza os %d valores da matriz %d x %d:\n", N*N, N, N);

    for(int y=0; y<N; y++){
        for(int x=0; x<N; x++){
            printf("Elemento [%d][%d]: ", y, x);
            scanf("%d", &matriz[pos(x, y, N)]);
        }
    }

    int opcao, escalar;

    do{

        printf("\nMenu:\n");
        printf("1 - Visualizar matriz\n");
        printf("2 - Multiplicar por escalar\n");
        printf("3 - Multiplicacao por matriz N×1\n");
        printf("0 - Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

      
        switch(opcao){

        case 1:
                printf("\nMatriz:\n");
                imprimeMatriz(matriz, N);
                break;

            case 2:
                printf("Introduza o escalar: ");
                scanf("%d", &escalar);
                produtoEscalar(matriz, N, escalar);
                printf("Matriz multiplicada pelo escalar %d:\n", escalar);
                imprimeMatriz(matriz, N);
                break;

            case 3:
                printf("Introduza os %d valores do vetor (matriz N×1):\n", N);
                for (int i = 0; i < N; i++) {
                    printf("Elemento [%d]: ", i);
                    scanf("%d", &mult[i]);
                }
                multMatrizes(matriz, mult, resultado, N);

                printf("Resultado da multiplicacao (matriz %d×1):\n", N);
                for (int i = 0; i < N; i++) {
                    printf("%d\n", resultado[i]);
                }
                break;

            case 0:
                printf("A sair...\n");
                break;

            default:
                printf("Opcao invalida.\n");

        }

    }while(opcao!=0);



    return 0;



}