#include <stdio.h>

int main(){

    int encomenda;
    char zona;
    float custo_total_uverits=0, custo_total_blovo=0;
    int tempo_total=0;
    int cont=0;

    float custo_A_uverits=5.35, custo_B_uverits=4.50, custo_C_uverits=3.25, custo_D_uverits=3.50, custo_E_uverits=4.75;
    float custo_A_blovo=3.50, custo_B_blovo=4.25, custo_C_blovo=5.00, custo_D_blovo=4.50, custo_E_blovo=4.00;
    int tempo_A_uverits=35, tempo_B_uverits=22, tempo_C_uverits=15,tempo_D_uverits=23,tempo_E_uverits=30;
    int tempo_A_blovo=21, tempo_B_blovo=24, tempo_C_blovo=24,tempo_D_blovo=21, tempo_E_blovo=24;

    while(scanf("%d %c", &encomenda, &zona)==2){

        float custo_u_current = 0, custo_b_current = 0;
        int tempo_u_current = 0, tempo_b_current = 0;


        if(zona == 'A'){
            custo_u_current=custo_A_uverits;
            custo_b_current=custo_A_blovo;
            tempo_u_current=tempo_A_uverits;
            tempo_b_current=tempo_A_blovo;
        

        }else if(zona == 'B'){
            custo_u_current=custo_B_uverits;
            custo_b_current=custo_B_blovo;
            tempo_u_current=tempo_B_uverits;
            tempo_b_current=tempo_B_blovo;

        }else if(zona == 'C'){
            custo_u_current=custo_C_uverits;
            custo_b_current=custo_C_blovo;
            tempo_u_current=tempo_C_uverits;
            tempo_b_current=tempo_C_blovo;

        }else if(zona == 'D'){
            custo_u_current=custo_D_uverits;
            custo_b_current=custo_D_blovo;
            tempo_u_current=tempo_D_uverits;
            tempo_b_current=tempo_D_blovo;

        }else if(zona == 'E'){
           custo_u_current=custo_E_uverits;
           custo_b_current=custo_E_blovo;
           tempo_u_current=tempo_E_uverits;
           tempo_b_current=tempo_E_blovo;
    

        }else{
        printf("Inválido\n");
        return 1;
    }

    if(custo_u_current<=custo_b_current){
        printf("Encomenda %d - uverits\n", encomenda);
        custo_total_uverits+=custo_u_current;
        tempo_total+=tempo_u_current;

    }else{
      printf("Encomenda %d - blovo\n", encomenda);
       custo_total_blovo += custo_b_current;
        tempo_total += tempo_b_current;

    }

    cont++;

    
}

int tempo_medio = (cont > 0) ? tempo_total / cont : 0;
    int minutos = tempo_medio;
    int segundos = (cont>0)?(tempo_total * 60 / cont) % 60 : 0;

    printf("Custo total na uverits: %.2f euros\n", custo_total_uverits);
    printf("Custo total na blovo: %.2f euros\n", custo_total_blovo);
    printf("Tempo medio das entregas: %d minutos e %d segundos\n", minutos, segundos);

    return 0;

}