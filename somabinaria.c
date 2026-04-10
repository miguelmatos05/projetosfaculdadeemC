#include <stdio.h>

int soma_binario(int a, int b) {
    int resultado = 0;
    int carry = 0;
    int pos = 1;  

    while (a > 0 || b > 0 || carry > 0) {

        int Ai = a % 10;  
        int Bi = b % 10;  

        a /= 10;
        b /= 10;

        
        int S = (Ai ^ Bi ^ carry);  
        int novoCarry = (Ai & Bi) | (carry & (Ai ^ Bi));

        
        resultado += S * pos;

        pos *= 10;  
        carry = novoCarry;
    }

    return resultado;
}


int main() {
    int a, b;

    printf("Digite o primeiro numero binario: ");
    scanf("%d", &a);

    printf("Digite o segundo numero binario: ");
    scanf("%d", &b);

    int r = soma_binario(a, b);

    printf("Resultado da soma: %d\n", r);

    return 0;
}

