#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
int escolhajogador, escolhacomputador;
srand(time(0));
 
printf("Jogo de Joquenpô\n");
printf("Escolha Uma Opção\n");
printf("1. pedra\n");
printf("2. papel\n");
printf("3. tesoura\n");
printf("Escolha:\n");
scanf("%d", &escolhajogador);
escolhacomputador, rand() % 3 + 1;
 switch (escolhajogador)
 {
 case 1:
printf("Jogador : Pedra - \n");
    break;
 case 2:
 printf("Jogador : Papel - \n");
 break;
 case 3:
 printf("Jogador : Tesoura - \n");
 default:
printf("Opção Invalida\n");
    break;
 }
 switch (escolhacomputador)
 {
 case 1:
printf("Computador: Pedra\n");
    break;
 case 2:
 printf("Computador: Papel\n");
 break;
 case 3:
 printf("Computador: Tesoura\n");
    break;
 }
 
 if(escolhajogador == escolhacomputador)
 {
  printf("Houve um empate\n");
 }
 else if ((escolhajogador == 1 && escolhacomputador == 3) ||
  (escolhajogador == 2 && escolhacomputador == 1) ||
(escolhajogador == 3 && escolhacomputador == 2))
 {
    printf("Parabens, voce ganhou!\n");
 }
 else{
    printf("Voce perdeu!\n");
 }
 return 0;

















}