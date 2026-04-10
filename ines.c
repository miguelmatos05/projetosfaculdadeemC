#include <stdio.h>

int main(){

char opcao;

printf("Inês está no telemóvel(S/N)?\n");
scanf(" %c", &opcao);

if(opcao=='N' || opcao=='n'){
   printf("Muito bem!\n");
   return 1;
}
 
else if(opcao=='S' || opcao=='s'){
   printf("Vai ver a Soraya!\n");
   return 1;
}

else{
   printf("Inválido.\n");
   return 1;
}

return 0;


}



