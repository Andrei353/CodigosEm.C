#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

struct estudante
{
    char turma [250];
    char nome [250];
    int idade;
    float notas [2];
    float soma = 0;
    float media = 0;
    char situacao;
};

struct docente
{
    char nome; 
    char diciplina [2];
    char turmas [2];

};


int main()
{
    setlocale(LC_ALL, "portuguese");

struct estudante aluno;
struct docente professor;
int i, j;


//Calculo de Alunos
for ( i = 0; i < 3; i++)
{
    printf("Digite o %iº Aluno: \n" i+1);
    gest(aluno.nome);

    printf("Digite o Número da Turma: \n");
    gets(aluno.turma);

    printf("Digite a Idade do Aluno: \n");
    scanf("%i",&aluno.idade);

    for ( j = 0; j < 2; j++)
    {
        printf("Digite a %iº Nota: \n", j+1);
        scanf("%i", &aluno.notas);

        aluno.soma += aluno.notas;
    }
    
    aluno.media = aluno.soma / 2;
    aluno.soma = 0
    
        fflush(stdin);
        printf("\n");
}



















return 0;
}