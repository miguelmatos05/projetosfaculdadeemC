#include <stdio.h>
#include <math.h>

double distancia(){

    double x1,y1,x2,y2;
    double distancia;

    distancia=sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));

    return distancia;

}

double colisao(double r1, double r2, double soma, double d){

    soma=r1+r2;
    d=distancia();

    if(d<soma){

        return 1;

    }else{
        return 0;
    }

}


int main(){


double x1,y1,x2,y2,r1,r2,d,soma;


printf("Posicao (x, y) e raio da bola 1?\n");
scanf("%lf %lf %lf", &x1, &y1, &r1);

printf("Posicao (x, y) e raio da bola 2?\n");
scanf("%lf %lf %lf", &x2, &y2, &r2);

 soma=r1+r2;

 d=distancia();


 if(d<soma){
    
    printf("As duas bolas estao em colisao.");
    return 1;

    }else{
        return 0;
    }

return 0;

}

