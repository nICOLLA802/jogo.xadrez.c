#include <stdio.h>
int main(){
    int opcao;
    float saldo = 1000.00;

printf("Digite um opcao:\n");
printf("1. Verificar o saldo\n");
printf("2. Fazer o deposito\n");
printf("3. Fazer um saque\n");
scanf("%d", &opcao);

switch (opcao)
{
case 1:
    printf("Seu saldo é: R$ %f \n", saldo );
    break;
case 2:
printf("Digite o banco que voce deseja depositar:\n");
printf("Digite a agencia que voce  deseja depositar:\n");
printf("Digite a conta que voce deseja depositar\n");
break;
case 3:
printf("Digite o valor do saque:\n");
default:
printf("opcao invalida!\n");
    break;
}



}