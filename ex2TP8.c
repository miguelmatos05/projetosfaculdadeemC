#include <stdio.h>

 int main(){

 int var1 = 5;
 char var2 = 'a';
 int *ptr1 = &var1;
 char *ptr2=&var2;
 *ptr2 = 'b';

 printf("var1 tem o endereco %p e o valor %d\n", ptr1, *ptr1);
 printf("var2 tem o endereco %p e o valor %d\n", ptr2, *ptr2);


 printf("\nTamanhos dos tipos:\n");
printf("sizeof(char)  = %lu byte(s)\n", sizeof(char));
printf("sizeof(char*) = %lu byte(s)\n", sizeof(char*));
printf("sizeof(int)   = %lu byte(s)\n", sizeof(int));
printf("sizeof(int*)  = %lu byte(s)\n", sizeof(int*));

printf("\nAritmetica de ponteiros:\n");
printf("ptr1     = %p\n", (void*)ptr1);
printf("ptr1 + 1 = %p\n", (void*)(ptr1 + 1));

printf("ptr2     = %p\n", (void*)ptr2);
printf("ptr2 + 1 = %p\n", (void*)(ptr2 + 1));



 return 0;
 
 }