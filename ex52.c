#include <stdio.h>

#define TAM_MAX 10


int produto_vetores(int entrada1[], int n1, int entrada2[], int n2, int saida[])
{

      if(n1<=0 || n2<=0 || n1>TAM_MAX || n2>TAM_MAX){
       
        return -1;
    }


    int n3=(n1 < n2) ? n1 : n2;


    for(int i=0; i<n3; i++){

        saida[i]=entrada1[i]*entrada2[i];
    }

    return n3;

    
}



void imprime_vetor(int v[], int n);

int main()
{
    int v1[TAM_MAX] = { 4, 7, 6 };
    int v2[TAM_MAX] = { 2, 8, 2, 1, 3 };
    int res[TAM_MAX], tam;

    printf("vetor de entrada 1: ");
    imprime_vetor(v1, 3);
    printf("vetor de entrada 2: ");
    imprime_vetor(v2, 5);

    tam = produto_vetores(v1, 3, v2, 5, res);

    printf("vetor de saida: ");
    imprime_vetor(res, tam);

    return 0;
}

void imprime_vetor(int v[], int n)
{
    int i;
    printf("{");
    for(i=0; i<n; i++)
        printf(" %d", v[i]);
    printf(" }\n");
}