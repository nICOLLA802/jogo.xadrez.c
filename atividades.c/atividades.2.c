#include <stdio.h>
 int main(){
  char variavel;
   
   printf("Digite um valor\n");
   scanf("%c" , &variavel);
     
   switch (variavel)
   {
   case 'a':
   printf("codigo a ser executado quando a == 1\n");
   printf("teste do case 1");   
    break;
   case 'b':
    printf("codigo a ser executado quando b== 2\n");
    printf("teste case 2");
   default:
   printf("codigo a ser executado a variavel nao for a ou b\n");
    break;
   }







 }