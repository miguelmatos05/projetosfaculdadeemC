#include <stdio.h>

int main(){

    int ano,tiragem,vendidos, diferenca;
    int menor_tiragem, ano_menor_tiragem;
    int  maior_diferenca, ano_maior_diferenca;
    int primeiro=1;

     for(int i=0; i<20; i++){

        scanf("%d", &ano);
        scanf("%d", &tiragem);
        scanf("%d", &vendidos);

        diferenca = tiragem - vendidos;

        printf("Diferença em %d: %d\n", ano, diferenca);



     

     if(primeiro){

        menor_tiragem=tiragem;
        ano_menor_tiragem=ano;
        maior_diferenca=diferenca;
        ano_maior_diferenca=ano;
        primeiro = 0;

     }else{

        if(tiragem < menor_tiragem ){

            menor_tiragem=tiragem;
            ano_menor_tiragem=ano;
        }

        if(diferenca > maior_diferenca){

            maior_diferenca = diferenca;
            ano_maior_diferenca = ano;
        }

    }

}

    printf("Ano em que foram produzidos menos exemplares: %d\n", ano_menor_tiragem);
    printf("Ano em que a diferença entre produzidos e vendidos foi maior: %d\n", ano_maior_diferenca);

    return 0;

}













