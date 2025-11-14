#include <stdio.h>

float custo(char zona, int servico){

    float custo_uverits=0, custo_blovo=0;
    float custo_A_uverits=5.35, custo_B_uverits=4.50, custo_C_uverits=3.25, custo_D_uverits=3.50, custo_E_uverits=4.75;
    float custo_A_blovo=3.50, custo_B_blovo=4.25, custo_C_blovo=5.00, custo_D_blovo=4.50, custo_E_blovo=4.00;


    if(servico==1){

        if(zona=='A'){
          custo_blovo=custo_A_blovo;
        }

        else if(zona=='B'){
            custo_blovo=custo_B_blovo;
        }

        else if(zona=='C'){
            custo_blovo=custo_C_blovo;
        }

        else if(zona=='D'){
            custo_blovo=custo_D_blovo;
        }

        else if(zona=='E'){
            custo_blovo=custo_E_blovo;
        }


        else{
            printf("Inválido\n");
            return 0;
        }

        return custo_blovo;
    }

    if(servico==0){

        if(zona=='A'){
            custo_uverits=custo_A_uverits;
        }

        else if(zona=='B'){
            custo_uverits=custo_B_uverits;
        }

        else if(zona=='C'){
            custo_uverits=custo_C_uverits;
        }

        else if(zona=='D'){
            custo_uverits=custo_D_uverits;
        }

        else if(zona=='E'){
            custo_uverits=custo_E_uverits;
        }

        else{
            printf("Inválido\n");
            return 0;
        }

        return custo_uverits;


    }
 
    return 0;
 
}

int main() {
    char zona;
    int servico;

    printf("Digite a zona (A-E) e o serviço (0-uverits,1-blovo): \n");
    scanf(" %c %d", &zona, &servico);

    printf("Custo: %.2f\n", custo(zona, servico));

    return 0;
}