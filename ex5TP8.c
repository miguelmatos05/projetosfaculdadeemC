#include <stdio.h>
#include <math.h>
#include "polinomios.h"
#include <stdlib.h>

int lerPoli(int *poli){

    int n;
    

    printf("Grau do polinomio (0 a %d): ", MAX_GRAU);
    scanf("%d", &n);

    for(int i=0; i<=n; i++){

        printf("Coeficiente de x^%d: ", i);
        scanf("%d", &poli[i]);
    }

    return n;

    }


void escrevePoli(int *poli, int grau){

    int primeiro=1;

    for(int i=grau; i>=0; i--){

        if(poli[i] != 0){

        if(!primeiro && poli[i]>0)
             printf(" + ");

        if(poli[i]<0)
           printf(" - ");
        

        int coef = abs(poli[i]);

        if(coef != 1 || i==0 )
           printf("%d", coef);


        if(i > 0)
        printf("x");

        if(i > 1)
        printf("^%d", i);

        primeiro=0;

        }


    }

    if(primeiro){
        printf("0");
    }

    printf("\n");

}

void adicionaPoli(int *p1, int *p2, int *pRes, int maiorGrau){

    for(int i=0; i<=maiorGrau; i++){

        pRes[i]=p1[i]+p2[i];
    }
}

float calc(int *poli, int grau, float x){

    float resultado=0.0;

    for(int i=0; i<=grau; i++){

        resultado += poli[i] * pow(x, i);
    }

    return resultado;
}



int main(){

    int p1[MAX_GRAU + 1] = {0};
    int p2[MAX_GRAU + 1] = {0};
    int pRes[MAX_GRAU + 1] = {0};

    int grau1, grau2, maiorGrau;
    float x;



    printf("=== Leitura do polinomio 1 ===\n");
    grau1 = lerPoli(p1);

    printf("\n=== Leitura do polinomio 2 ===\n");
    grau2 = lerPoli(p2);

    maiorGrau = (grau1 > grau2) ? grau1 : grau2;

    printf("\nPolinomio 1: ");
    escrevePoli(p1, grau1);

    printf("Polinomio 2: ");
    escrevePoli(p2, grau2);

    adicionaPoli(p1, p2, pRes, maiorGrau);

    printf("\nSoma dos polinomios: ");
    escrevePoli(pRes, maiorGrau);

    printf("\nValor de x: ");
    scanf("%f", &x);

    printf("P1(%.2f) = %.2f\n", x, calc(p1, grau1, x));
    printf("P2(%.2f) = %.2f\n", x, calc(p2, grau2, x));
    printf("Soma(%.2f) = %.2f\n", x, calc(pRes, maiorGrau, x));

    return 0;

}