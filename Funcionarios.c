#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

struct endereco
{
    char rua [250];
    char numero [250];
    char bairro [250];
    char cidade [250];
    char estado [250];
};
struct funcionario
{
    char nome [250];
    int admissao;
    int matricula;
    struct endereco endereco;

};

struct cliente
{
    char nome [250];
    int nascimento;
    struct endereco endereco;
};



int main()
{
    setlocale(LC_ALL, "portuguese");

struct funcionario trabalho[3];
struct cliente consumidor[3];
int i ;
int situacao = 0; 

//Calculo de dados
 for ( i = 0; i < 3; i++)
 {
    printf("Informe seu Número \n");
    printf("1 - Funcionário \n");
    printf("2 - Cliente \n");
    printf("Número:");
    scanf("%i", &situacao);

    switch (situacao)
    {
    case 1:
    fflush(stdin);
        printf("Digite seu Nome: \n");
        gets(trabalho[i].nome);

        printf("Data de Admissão: \n");
        scanf("%i", &trabalho[i].admissao);

        printf("Digite sua Matrícula: \n");
        scanf("%i", &trabalho[i].matricula);

        printf("Digite o Dados do Endereço... \n");
        printf("Digite sua Rua: \n");
        gets(trabalho[i].endereco.rua);
fflush(stdin);

        printf("Digite o Número da Casa: \n");
        gets(trabalho[i].endereco.numero);
fflush(stdin);

        printf("Digite o Bairro: \n");
        gets(trabalho[i].endereco.bairro);
fflush(stdin);

        printf("Digite a Cidade: \n");
        gets(trabalho[i].endereco.cidade);
fflush(stdin);

        printf("Digite o Estado: \n");
        gets(trabalho[i].endereco.estado);
fflush(stdin);

        break;
    
    case 2:
         printf("Digite seu Nome: \n");
        gets(consumidor[i].nome);
        printf("Data de Nascimento: \n");
        scanf("%i", &consumidor[i].nascimento);
        printf("Digite o Dados do Endereço... \n");
        printf("Digite sua Rua: \n");
        gets(consumidor[i].endereco.rua);
fflush(stdin);
        printf("Digite o Número da Casa: \n");
        gets(consumidor[i].endereco.numero);
fflush(stdin);
        printf("Digite o Bairro: \n");
        gets(consumidor[i].endereco.bairro);
fflush(stdin);
        printf("Digite a Cidade: \n");
        gets(consumidor[i].endereco.cidade);
fflush(stdin);
        printf("Digite o Estado: \n");
        gets(consumidor[i].endereco.estado);
fflush(stdin);
    default:
        break;
    }
 }

for ( i = 0; i < 3; i++)
{
  printf("Nome: %s \n", trabalho[i].nome);
  printf("Data de Admissão: %i \n", trabalho[i].admissao);
  printf("Matricula: %i \n", trabalho[i].matricula);
  printf("Rua: %s \n", trabalho[i].endereco.rua);
  printf("Número: %s \n", trabalho[i].endereco.numero);
  printf("Bairro: %s \n", trabalho[i].endereco.bairro);
  printf("Cidade: %s \n", trabalho[i].endereco.cidade);
  printf("Estado: %s \n", trabalho[i].endereco.estado);
}

for ( i = 0; i < 3; i++)
{
  printf("Nome: %s \n", consumidor[i].nome);
  printf("Data de Nascimento: %i \n", consumidor[i].nascimento);
  printf("Rua: %s \n", consumidor[i].endereco.rua);
  printf("Número: %s \n", consumidor[i].endereco.numero);
  printf("Bairro: %s \n", consumidor[i].endereco.bairro);
  printf("Cidade: %s \n", consumidor[i].endereco.cidade);
  printf("Estado: %s \n", consumidor[i].endereco.estado);
}











return 0;
}