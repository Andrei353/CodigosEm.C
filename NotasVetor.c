#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include <string.h>
 
int main (){
	setlocale(LC_ALL,"portuguese");
//Declarando Variaveis
int notas[4];
int i;
float media;
float soma = 0;

//Declarando Dados
printf("Digite suas Notas: \n");
for ( i = 0; i < 4; i++)
{
    printf("Notas %d:", i + 1);
    scanf("%d", &notas[i]);

    soma += notas[i];
}

//Limpa Tela and Sleep
system("cls || clear");
printf("Armazenando Notas e calculando média ");
for ( i = 0; i < 3; i++)
{
    printf(".");
sleep(1);
}

//Exibindo Dados 
for ( i = 0; i < 4; i++)
{
    printf("\n");
    printf("Sua Nota %d: %d\n", i+1, notas[i]);
}

media = soma / 4;
printf("\n");
printf("Sua média: %.1f \n", media);

if (media >= 7)
{
    printf("Aprovado!!!");
}
else if (media >= 5)
{
    printf("Recuperação!!!");
}
else
{
    printf("Reprovado!!!");
}


return 0;
}