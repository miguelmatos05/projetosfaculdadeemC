#include <stdio.h>

int compacta(char orig[], int N, char dst[]){


    if(N==0) return 0;

    int j=0;

    dst[j++]=orig[0];

    for(int i=1; i<N; i++){

        if(orig[i] != orig[i-1]){
            dst[j++]=orig[i];
        }
    }

    return j;
}

int main(){

    char orig[100], dst[100];
    int n=0;
    char c;

    printf("Introduza caracteres (termina com '.'): \n");

    while(scanf("%c", &c)==1 && c!='.'){

        orig[n++]=c;
    }

    int newN = compacta(orig, n, dst);

    printf("\nVetor original: ");
    for (int i = 0; i < n; i++) printf("%c", orig[i]);

    printf("\nVetor compactado: ");
    for (int i = 0; i < newN; i++) printf("%c", dst[i]);

    printf("\nTamanho final: %d\n", newN);

    return 0;

 


}