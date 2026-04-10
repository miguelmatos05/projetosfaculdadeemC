#include <stdio.h>
#include <math.h>

double distancia(double x1,double y1, double x2, double y2){

    double distancia;
    
    printf("Quais as coordenadas do ponto 1?\n");
    scanf("%lf %lf", &x1, &y1);

    printf("Quais as coordenadas do ponto 2?\n");
    scanf("%lf %lf", &x2, &y2);

    distancia=sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));

    return distancia;

}

int main(){

double x1,y1,x2,y2,d;

d=distancia(x1,y1,x2,y2);

printf("A distancia entre os dois pontos eh %lf\n", d);

return 0;



}