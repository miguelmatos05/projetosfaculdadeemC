#include <stdio.h>

float pesoideal(float altura, char genero){

    float pesoideal;

    printf("Insira a altura da pessoa: ");
    scanf("%f", &altura);
    printf("Insira o sexo da pessoa(M/F): ");
    scanf(" %c", &genero);

    switch(genero){

        case ('M'):
        case('m'):

        pesoideal=72.5*altura-58.0;
        break;

        case('F'):
        case('f'):

        pesoideal=62.1*altura-44.7;
        break;

        default:
        return -1;
    }

    return pesoideal;
}

int main(){

    float altura;
    char genero;
    float resultado;

    resultado=pesoideal(altura, genero);

    if (resultado < 0) {
        printf("Genero invalido!\n");
    } else {
        printf("O peso ideal seria %.2f kg\n", resultado);
    }

    return 0;


}