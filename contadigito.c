#include <stdio.h>

int contardigitos(int numero, int digito){

    int count=0;

    if (numero < 0) numero = -numero;

    while(numero>0){

        if(numero%10==digito)
          count++;
        numero /= 10;
    }

    return count;


}

int main(){

    int numero,digito;

    printf("Digite um número: ");
    scanf("%d", &numero);

    printf("Digite o dígito que deseja contar (0-9): ");
    scanf("%d", &digito);

    int resultado = contardigitos(numero, digito);

    printf("O dígito %d aparece %d vez(es) no número %d.\n",
           digito, resultado, numero);

    return 0;
}
