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

void mostrarDados(char nome[], int idade){
printf("Nome: %s \n", nome);
printf("Idade: %i \n", idade);

}

void limpatela(){
  fflush(stdin);
  system("cls || clear");

}

int main()
{
    setlocale(LC_ALL, "portuguese");

char nome [250];
int idade;

cabecalho(); //chamada da fumção

printf("Digite um nome: ");
gets(nome);
limpatela();

printf("Digite sua idade: ");
scanf("%i",&idade);
limpatela();

cabecalho();

mostrarDados(nome, idade);

  return 0;
}