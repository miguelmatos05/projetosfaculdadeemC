#include <stdio.h>
#include <ctype.h>

/** 
 *  @brief  Determinar o total de vogais de um vetor de caracteres.
 *  @param  vec Vetor de caracteres.
 *  @param  n Número de elementos do vetor.
 *  @return Número total de vogais do vetor.
 */
int totalVogais(char vec[], int n)
{

    if (n <= 0){         // tamanho inválido
        return -1;

    }



    int count=0;
    
    for(int i=0; i<n; i++){

        char c=tolower(vec[i]);
        

        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
          
            count++;

    }
 
} 

return count;

}

void printVector(char vec[], int n)
{
    printf("Vetor: { ");
    for (int i = 0; i < n; i++) printf("%c ", vec[i]);
    printf("}\n");
}
 
int main()
{ 
    char vec_chars[] = {'a', 'd', ' ', '3', 'B'}; 
    printVector(vec_chars, 5);
    printf("Total vogais: %d\n", totalVogais(vec_chars, 5)); 
    return 0; 
}