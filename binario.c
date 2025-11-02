#include <stdio.h>
#include <math.h>

int main(){

    int a,b,c,d,D;

    scanf("%d %d %d %d", &a,&b,&c,&d);


      if ((a> 1 || a< 0) || (b> 1 || b < 0) || 
        (c>1 || c< 0) || (d> 1 || d< 0)) {
        printf("Erro: todos os bits devem ser 0 ou 1.\n");
        return 1;
    }

    D=a*8+b*4+c*2+d*1;

    printf("O valor na base decimal: %d\n", D);
    printf("O valor na base octal: %o\n", D);
    printf("O valor na base hexadecimal: %X\n", D);

    return 0; 


}