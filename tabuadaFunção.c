#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

//Declarando Funções
void tabuada(int tamanho){
int i;
   for ( i = 0; i < 11; i++)
   {
    printf("%i x %i = %i \n", tamanho, i, tamanho*i);
   }
}

void limpatela(){
  fflush(stdin);
  system("cls || clear");

}

int main()
{
    setlocale(LC_ALL, "portuguese");
//Declarando Variaveis
int valor;

//solicitando Dados

do
{
    printf("Digite um valor entre 1 á 10: ");
    scanf("%i", &valor);
    limpatela();

   if (valor < 1 || valor > 10)
   {
    printf("VALOR INVALIDO!!!");
   }
   


} while (valor < 1 || valor > 10);


//Mostrando resultados
tabuada(valor);


return 0;
}