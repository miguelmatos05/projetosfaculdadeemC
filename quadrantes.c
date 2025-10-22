#include <stdio.h>

int main(){

    float x,y;

    scanf("%f,%f", &x,&y);

    if(x==0 && y==0){
        printf("O ponto encontra-se na origem.\n");
        return 1;
    }
    
    else if( x>0 && y>0){
        printf("O ponto encontra-se no 1o quadrante.\n");
    }

    else if(x<0 && y>0){
        printf("O ponto encontra-se no 2o quadrante.\n");
    }

    else if(x<0 && y<0){
        printf("O ponto encontra-se no 3o quadrante.\n");
    }

    else if(x>0 && y<0){
        printf("O ponto encontra-se no 4o quadrante.\n");
    }

    return 0;

}