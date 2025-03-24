#include <stdio.h>
int main(){
int opção; 
float nota1 , nota2 , media;
 
printf("Menu de gerenciamento do estudante\n");
printf("1. calcular Media\n");
printf("2. Determinar status\n");
printf("3. Sair\n");
printf("Escolha uma opção:\n");
scanf("%d" , &opção);

switch (opção)
{
case 1:
   printf("calcular a media:\n");
   printf("Digite a sua primeira nota:\n");
   scanf("%f", &nota1);
   printf("Digite a sua segunda nota:\n");
   scanf("%f", &nota2);

if((nota1 >=0 && nota1<=10)&&(nota2 >=0 && nota2<=10)){
    media = (nota1 + nota2) / 2;
    printf("A media é: %.2f\n", media);
}else{printf("ENTRADA  COM NUMERO ERRADOS\n");

}

    break;
case 2:
printf("Determinar status\n");
printf("ENTRE COM A SUA MEDIA\n");
scanf("%f", &media);
media >= 6 ? printf("Aprovado\n") : printf("Reprovado\n");
break;
case 3:
printf("saindo do programa\n");
default:
printf("Opção invalida\n");
    break;
}
 return 0;
}