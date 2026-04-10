#include <stdio.h>

int calcula_voltas(float peso_carro, float taxa_peso, float espessura_pneus, float desgaste_pneus){

int voltas = 0;


if(peso_carro<765 || peso_carro>800){
    return -1;
}

if(taxa_peso<0 || taxa_peso>100){
    return -1;
}

if(desgaste_pneus>espessura_pneus){
    return -1;
}

while(espessura_pneus>1.0){

     float desgaste_real = desgaste_pneus + (0.0001 * peso_carro);

        if (desgaste_real <= 0)
            break;

        
        espessura_pneus -= desgaste_real;

        
        peso_carro -= peso_carro * (taxa_peso / 100.0);

        voltas++;


}

return voltas;

}


int main(){

float peso_carro,taxa_peso,espessura_pneus;
float desgaste_pneus; 

printf("ret = calcula_voltas");
scanf("%f %f %f %f", &peso_carro, &taxa_peso, &espessura_pneus, &desgaste_pneus);


    int resultado = calcula_voltas(peso_carro, taxa_peso, espessura_pneus, desgaste_pneus);
    
    if(resultado){
       printf("Os pneus desgaste máximo na volta: %d\n", resultado);

    }
    else if(resultado==-1){
        printf("Parâmetros incorretos.\n");
    }

    return 0;








}
