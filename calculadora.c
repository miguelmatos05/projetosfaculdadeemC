#include <stdio.h>

int main(){
    double num1, num2;
    char op;

    printf("Escolha a operação: \n");
    scanf(" %c", &op);

    printf("Insira um operando: \n");
    scanf("%lf", &num1);
    printf("Insira outro operando: \n");
    scanf("%lf", &num2);

    switch(op){
        case '+':
            printf("Resultado: %.2lf\n", num1 + num2);
            break;
        case '-':
            printf("Resultado: %.2lf\n", num1 - num2);
            break;
        case '*':
            printf("Resultado: %.2lf\n", num1 * num2);
            break;
        case '/':
            if(num2 !=0){
                printf("Resultado: %.2lf\n", num1/num2);
            }
            else{
                printf("Erro: Divisão por zero!\n");
            }
            break;

        case '%':
            if((int)num2 !=0){
                printf("Resultado: %d\n", (int)num1 % (int)num2);
            }
            else{
                printf("Erro: Divisão por zero!\n");
            }
            break;

        default:
            printf("Operação inválida!\n");

    }

    return 0;

}