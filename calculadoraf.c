#include <stdio.h>

// Funções para operações matemáticas
float somar(float a, float b) {
    return a + b;
}

float subtrair(float a, float b) {
    return a - b;
}

float multiplicar(float a, float b) {
    return a * b;
}

float dividir(float a, float b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Erro: Divisao por zero!\n");
        return 0; // Retorna 0 em caso de divisão por zero
    }
}

int main() {
    float num1, num2;
    int opcao;

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);

    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    while (1) {
        // Exibir menu
        printf("\n--- CALCULADORA ---\n");
        printf("1 - Somar\n");
        printf("2 - Subtrair\n");
        printf("3 - Multiplicar\n");
        printf("4 - Dividir\n");
        printf("5 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Resultado: %.2f\n", somar(num1, num2));
                break;
            case 2:
                printf("Resultado: %.2f\n", subtrair(num1, num2));
                break;
            case 3:
                printf("Resultado: %.2f\n", multiplicar(num1, num2));
                break;
            case 4:
                printf("Resultado: %.2f\n", dividir(num1, num2));
                break;
            case 5:
                printf("Saindo da calculadora...\n");
                return 0;
            default:
                printf("Opcao invalida! Tente novamente.\n");
        }
    }

    return 0;
}
