#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>



void cabecalho (){
printf("\n==================================\n");
printf("\t\tSenai");
printf("\n==================================\n");

}

int somar(int n1, int n2){
return n1 + n2;

}

void limpatela(){
  fflush(stdin);
  system("cls || clear");

}

int main()
{
    setlocale(LC_ALL, "portuguese");
int primeiroNumero;
int segundoNumero;
int soma;

cabecalho(); //chamada da fumção

printf("Digite o primeiro número: ");
scanf("%d", &primeiroNumero);
limpatela();

printf("Digite o segundo número:");
scanf("%d",&segundoNumero);
limpatela();

soma = somar(primeiroNumero, segundoNumero);

cabecalho();
printf("Soma: %d \n", soma);

  return 0;
}