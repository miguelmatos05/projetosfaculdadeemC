#include <stdio.h>

long proximoFib(){

    static long a=1;
    static long b=2;
    static int primeira=1;

    if(primeira){

        primeira=0;
        return a;
    }

    long temp=a+b;
    a=b;
    b=temp;


    return a;
}

    

int main(){

    for(int i=0; i<10; i++){

        printf("%ld", proximoFib());

    }

    return 0;

}