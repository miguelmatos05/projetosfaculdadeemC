#include <stdio.h>
#include <math.h>


int rpo12(float a, float b, float c, float *r1, float *r2){

   float r=b*b-4*a*c;

   if(r<0){
    return 0;

   }else{

    *r1=(-b+sqrt(r))/(2*a);
    *r2=((-b-sqrt(r))/(2*a));
    return 1;
}

}

int main(){


    float a,b,c,x1,x2;
    printf("Coeficientes?");
    scanf("%f %f %f", &a,&b,&c);

    if(rpo12(a,b,c,&x1,&x2)){
    printf("As raizes são %f %f\n",x1,x2);

    }else{
        printf("Não tem raizes.\n");
    }

    return 0;
}

