#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
int opção;
int numerosecreto , palpite;

    printf("Menu Principal\n");
    printf("1. Iniciar Jogo\n");
    printf("2. Ver Regras\n");
    printf("3. Sair\n");
    printf("Escolha Uma Opçao:");
    scanf("%d" , &opção);
switch (opção)
{
case 1:
  srand(time(0));
  numerosecreto= rand() % 10;
  printf("Digite um numero de 0 a 9: ");
  scanf("%d", &palpite);
  if (numerosecreto == palpite)
  {
   printf("Voce acertou!!!\n");
   printf("Numero secreto %d\n", numerosecreto);
  } else{
    printf("Voce errou o palpite\n");
    printf("Numero secreto %d\n", numerosecreto);
  }
  
    break;
case 2:
printf("As regras sao...\n");
break;
case 3:
printf("Saindo do jogo...\n");
default:
printf("Opçao Invalida\n");
    break;
}





}