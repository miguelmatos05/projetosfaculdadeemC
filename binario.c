#include <stdio.h>

int somabinaria(int a, int b) {
    int carry = 0;       // inicializa o carry
    int resultado = 0;   // resultado final
    int i = 0;           // contador de bits

    while (a != 0 || b != 0 || carry != 0) {
        int bit_a = a & 1;
        int bit_b = b & 1;

        int soma = bit_a + bit_b + carry;

        // adiciona o bit de soma ao resultado
        resultado |= (soma % 2) << i;

        // atualiza o carry
        carry = soma / 2;

        // desloca os operandos
        a >>= 1;
        b >>= 1;

        i++;
    }

    return resultado;
}

int main() {
    int a, b;

    printf("Introduza dois números inteiros: ");
    scanf("%d %d", &a, &b);

    int soma = somabinaria(a, b);

    printf("A soma é %d\n", soma);

    return 0;
}
