#include <stdio.h>

int converte_codigo_cores(int cor, int pos, float *ret){
    
     if(cor<0 || cor>9){
        return -1;
     }

     if(pos==1){
        *ret=cor*10;
    }

    else if(pos==2){

        *ret+=cor;
    }

    else if(pos==3){
         float mult = 1.0;
        for (int i = 0; i < cor; i++){
            mult *= 10.0;
    }

    *ret *= mult; 
}

    else{
        return -1;
    }

    return 0;

}

int main(){
    int cor, i;
    float resistor = 0.0;
    int pos=1;

    printf("Cores:\n 0 - Black \n 1 - Brown \n 2 - Red \n 3 - Orange \n 4 - Yellow \n 5 - Green \n 6 - Blue \n 7 - Violet \n 8 - Grey \n 9 - White\n\n");
    for(i = 1; i < 4; i++){
        do{
            printf("Introduza a cor da banda %d: ", i);
            scanf("%d", &cor);
        }while((cor < 0) || (cor > 9));

       converte_codigo_cores(cor, pos, &resistor);

        pos++;
    }
    printf("Valor da resistencia: %.2f Ohms\n", resistor);

}