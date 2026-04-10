#include <stdio.h>
#include <math.h>

int sum_v(float x[], int n, float vRet[]){

    int somaTotal=0, k=0;

    for(int i=0; i<n-1; i+=2){
        
        somaTotal+=x[i] + x[i+1];
        k++;
    }

    return k;
}

float range_v(float x[], int n){

    if(n<=0) return 0;

    float maior=x[0];
    float menor=x[0];

    for(int i=1; i<n; i++){
        if (x[i] > maior) maior = x[i];
        if (x[i] < menor) menor = x[i];
    }

    return maior-menor;

}


int diff_v(float x[], int n, float vRet[]){

    int k=0;

    for(int i=0; i<n-1; i+=2){

        float a=x[i];
        float b=x[i+1];
        float mediaGeo=sqrt(a*b);
        float desvio1 = fabs(a - mediaGeo);
        float desvio2 = fabs(b - mediaGeo);
        vRet[k] = (desvio1 > desvio2) ? desvio1 : desvio2;
        k++;
    }

    return k;

}

void print_vetor(float v[], int n) {
    for (int i = 0; i < n; i++)
        printf("%.3f ", v[i]);
    printf("\n");
}


int main(){

    float x[100], vRet[100];
    int n;

    printf("Tamanho do vetor: ");
    scanf("%d", &n);

    printf("Introduza os %d valores:\n", n);
    for (int i = 0; i < n; i++){
        scanf("%f", &x[i]);
    }


    int tamSum = sum_v(x, n, vRet);
    printf("\nSoma de pares consecutivos:\n");
    print_vetor(vRet, tamSum);

     float diff = range_v(x, n);
    printf("\nDiferença entre maior e menor elemento: %.3f\n", diff);

    
    int tamDiff = diff_v(x, n, vRet);
    printf("\nMaior desvio absoluto em relação à média geométrica por par:\n");
    print_vetor(vRet, tamDiff);

    return 0;
    
}