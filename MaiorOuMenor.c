#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include <string.h>
 
int main (){
	setlocale(LC_ALL,"portuguese");
//Declarando Variaveis
int i;
int numero[5];
int maior = 0, menor = 9999999;


//Dados do �suario
for ( i = 0; i < 5; i++)
{
    printf("Digite os N�mero %d:", i + 1);
    scanf("%d",&numero[i]);
if (numero[i] > maior) {
    maior = numero[i]; }

if (numero[i] < menor) {
    menor = numero[i]; }
}




printf("Maior N�mero: %d \n", maior);
printf("Menor N�mero: %d \n", menor);



return 0;
}