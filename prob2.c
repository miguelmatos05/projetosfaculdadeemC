#include <stdio.h>

// Função para preparar o foguete (verifica combustível)
int prepare(int fuel_inicial) {
    
    if(fuel_inicial==0){
        return 0;
    }
    else if(fuel_inicial<0){
        return 0;
    }
    else{
        return fuel_inicial;
    }

    
}

// Função para mostrar o status atual (posição e combustível)
void status(int x, int y, int z, int fuel) {
    
    printf("Status do Foguete\n");
    printf("Posicao: (%d,%d,%d)\n", x,y,z);
    printf("Combustivel restante (em percentagem): %d\n", fuel);
}

// Função para mover o foguete
int move(int fuel, int consume) {

    fuel -= consume;
       if(fuel < 0){ fuel = 0;}
    return fuel;
}



// Função para verificar se chegou ao destino
int arrived(int x, int y, int z) {

    if(x==999 && y==999 && z==999){
        return 1;
    }else{
        return 0;
    
    }
}


//NAO DEVE ALTERAR A FUNCAO MAIN
int main() 
{
    int fuel, consume;
    int x = 0, y = 0, z = 0;

    //Le a primeira linha
    scanf ("%d", &fuel);
    
    if (!prepare(fuel)) {
        printf("Combustivel insuficiente para iniciar a missao.\n");
        return 1;
    }

    status(x, y, z, fuel);

    //Le as demais linhas
    while (1) {
        scanf("%d %d %d %d", &x, &y, &z, &consume);

        fuel = move(fuel, consume);
        if (fuel == 0) {
            printf("Combustivel insuficiente!\n");
            break;
        }

        status(x, y, z, fuel);

        if (arrived(x, y, z)) {
            printf("O foguete chegou a Marte!\n");
            break;
        }
    }
    return 0;
}