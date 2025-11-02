#include<stdio.h>

int main(){

    int x, soma=0;

    printf("Digite um número inteiro: ");
    scanf("%d", &x);

    if(x<0){
        x=-x;
    }

    while(x>0){
        soma += x%10;
        x /= 10;
    }

    printf("A soma dos digítos é: %d\n", soma);

    return 0; 


}