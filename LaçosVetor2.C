#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include <string.h>
 
int main (){
	setlocale(LC_ALL,"portuguese");
//Declarando Variaveis
int vetor[3];
int i;

//Declarando Dados
printf("Digite suas Notas: \n");
for ( i = 0; i < 3; i++)
{
    printf("Notas %d:", i + 1);
    scanf("%d", &vetor[i]);
}
//Limpa Tela and Sleep
system("cls || clear");
printf("Armazenando Notas");
sleep(1);
printf(".");
sleep(1);
printf(".");
sleep(1);
printf(".");
sleep(2);

//Exibindo Dados 
for ( i = 0; i < 3; i++)
{
    printf("Sua Nota %d: %d\n", i+1, vetor[i]);
}


return 0;
}
