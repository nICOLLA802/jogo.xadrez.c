#include <stdio.h>
int main(){
 char estado;
 char codigo[20];
 char cidade;
 int população;
 float area;
 float PIB;
 int pontosturistico;

printf("ENTRE COM O NOME DO ESTADO1\n");
scanf(  "%s", &estado);
printf("ENTRE COM O CODIGO DA CARTA1\n");
scanf("%s", &codigo);
printf("ENTRE COM O NOME DA CIDADE1\n");
scanf("%s", &cidade);
printf("ENTRE COM A POPULACAO1\n");
scanf("%d" , &população); 
printf("ENTRE COM A AREA1\n");
scanf("%f" , &area);
printf("ENTRE COM O PIB1\n");
scanf( "%f" , &PIB);
printf("ENTRE COM OS PONTOS TURISTICOS1\n");
scanf("%d", &pontosturistico);

char estado2;
char codigo2[20];
char cidade2;
int população2;
float area2;
float PIB2;
int pontosturistico2;


printf("ENTRE COM O NOME DO ESTADO2\n");
scanf("%s", &estado2);
printf("ENTRE COM O CODIGO DA CARTA2\n");
scanf("%s", &codigo2);
printf("ENTRE COM O NOME DA CIDADE2\n");
scanf("%s", &cidade2);
printf("ENTRE COM A POPULACAO2\n");
scanf("%d" , &população2); 
printf("ENTRE COM A AREA2\n");
scanf("%f" , &area2);
printf("ENTRE COM O PIB2\n");
scanf("%f" , &PIB2);
printf("ENTRE COM OS PONTOS TURISTICOS2\n");
scanf("%d", &pontosturistico2);

 if(população>população2){printf("POPULACAO1 MAIOR QUE A POPULAÇAO2\n ");
} 
 else{printf("POPULACAO1 MENOR QUE A POPULACAO2\n");
}
if(area>area2){printf("AREA1 MAIOR QUE A AREA2\n");
}
else{printf("AREA1 MENOR QUE A AREA2\n");
}
if (PIB>PIB2)
{printf("PIB1 MAIOR QUE O PIB2\n");
}
else{printf("PIB1 MENOR QUE O PIB2\n");
}
if (pontosturistico>pontosturistico2)
{printf("HA MAIS NO PONTOS TURISTICOS1 DO QUE PONTOS TURISTICO2\n");
}
else{printf("NAO A MAIS PONTOS TURISTICO1 DO QUE NO PONTO TURISTICO2\n");
}
return 0;






}