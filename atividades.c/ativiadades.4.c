#include <stdio.h>
int main(){
int opção;

printf("Menu Principal\n");
printf("1. Iniciar Jogo\n");
printf("2. Ver Regras\n");
printf("3. Sair\n");
printf("Escolha Uma Opçao:");
scanf("%d" , &opção);

switch (opção)
{
case 1:
printf ("Execução do Jogo\n");
  break;
case 2:
printf("Regras do Jogo...\n");
break;
case 3:
printf("Sair do Jogo\n");
default:
printf("opção Invalida\n");
    break;
}





}