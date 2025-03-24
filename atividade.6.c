#include <stdio.h>
int main(){
int idade;
int resultado;
  
printf("Digite a sua idade:\n");
scanf("%d" , &resultado);
 resultado = idade >=18 ? 1 : 0 ;


 if (resultado == 1){
    printf("Você é maior de idade\n");
 }
 else{
    printf("Vovê não é maior de idade\n");
 }
}