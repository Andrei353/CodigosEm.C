#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include <string.h>
 
int main (){
	setlocale(LC_ALL,"portuguese");
//Declarando Variaveis
int i;
int numero[6];
int par = 0;
int impar = 0;

//Dados do �suario
for ( i = 0; i < 6 ; i++)
{
   printf("Digite %d N�mero:", i + 1);
   scanf("%d", &numero[i]);
    
   numero[i] % 2 == 0 ? par++ : impar++;
}

system("cls || clear");
printf("Exibindo os N�meros");
for ( i = 0; i < 3; i++)
{
    printf(".");
sleep(1);
}

for ( i = 0; i < 6; i++)
{
    printf("N�mero: %d \n", numero[i]);
}

  printf("N�meros Pares: %d \n", par);
  printf("N�meros Impares: %d \n", impar);




return 0;
}