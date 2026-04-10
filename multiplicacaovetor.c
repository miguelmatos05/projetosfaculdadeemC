#include <stdio.h>
#define TAM 30

void multiEspecial(int n, int v1[], int v2[], int vRet[]){
    
    for (int i = 0; i < n; i++) {
        vRet[i] = v1[i] * v2[n - 1 - i];
}

}

void leVetor(int v[], int n){
    for(int i=0; i < n; i++){
        scanf("%d", &v[i]);
    }
}

int main()
{
    int v1[TAM], v2[TAM], ret[TAM], n;
    
    scanf("%d", &n);

    
    leVetor(v1, n);
    
    leVetor(v2, n);
    
      multiEspecial(n, v1, v2, ret);
    printf("Multiplicacao especial: { ");
    for(int i=0; i < n; i++){
        printf("%d ", ret[i]);
    }
    printf("}\n");
    
    return 0;
}
