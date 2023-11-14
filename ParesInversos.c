#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

int main () {
    setlocale(LC_ALL,"portuguese");

int i;
int quantidade = 6;
int numero[quantidade];
int x;

for ( i = 0; i < quantidade; i++)
{
do
{
   printf("Digite o %iº Número:",i+1);
   scanf("%i",&numero[i]);
} while (numero[i] % 2 == 1);


}

//Mostrando Dados
//Armazenando (Front-End)
    system("cls || clear");
    printf("Armazenando Dados Pessoais");
    for (i = 0; i < 3; i++)
    {
    printf(".");
    sleep(1);
    }
    
    for ( i = 5; i >= 0 ; i--)
    {
       printf("\n %iº número: %i \n", x+1, numero[i]);
       x++;
    }
    





return 0;
}