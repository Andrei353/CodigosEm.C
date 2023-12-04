#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

struct funcionario
{
    int idade;
    char nome [250];
    char cpf [250];
};

struct cliente
{
    int idade;
    char nome [250];
    char cpf [250];
};

int main()
{
    setlocale(LC_ALL, "portuguese");

struct funcionario trabalho;
struct cliente consumidor;
int situacao;

// Calculando dados 
printf("----------------------------- \n");
printf("Bem-Vindo :) \n");
printf("|  1  | Funcionário \n");
printf("|  2  | Cliente \n");
printf("----------------------------- \n");
printf("Informe qual número o senhor é: ");
scanf("%i",&situacao);

switch (situacao)
{
case 1:
    fflush(stdin);
    printf("Digite seu nome: \n");
    gets(trabalho.nome );
    printf("Digite seu CPF: \n");
    gets(trabalho.cpf);
    fflush(stdin);
    printf("Digite sua idade: \n");
    scanf("%i", &trabalho.idade);
    break;

case 2:
    printf("Digite seu nome: \n");
    gets(consumidor.nome);
    printf("Digite seu CPF: \n");
    gets(consumidor.cpf);
    printf("Digite sua idade: \n");
    scanf("%i", &consumidor.idade);
    break;


default:
printf("OPÇÃO INVALIDA!!!");
    break;
}

printf("Nome: %s \n", trabalho.nome, consumidor.nome);
printf("Cpf: %s \n", trabalho.cpf, consumidor.cpf);
printf("Idade: %i \n", trabalho.idade, consumidor.idade);





    return 0;
}