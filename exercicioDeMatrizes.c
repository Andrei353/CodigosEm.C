#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include <string.h>

int main (){
	setlocale(LC_ALL,"portuguese")
//Declarando Variaveis
char alunos[2] [200];
float notas[2][3];
int i, j;

for ( i = 0; i < 2; i++)
{
    printf("Digite o nome do %dº aluno: ", i + 1);
    gets(alunos[i]);

    for ( j = 0; j < 3; j++)
    {
       printf("Digite o nome do %dº aluno: ", j + 1);
       scanf("%f",&notas[i][j]);
    }
    
}

system("cls || clear");
printf("Armazenando Notas e calculando m�dia ");
for ( i = 0; i < 3; i++)
{
    printf(".");
sleep(1);
}


for ( i = 0; i < 2; i++)
{
    printf("Nome do %dº aluno: ", i + 1, alunos[i]);
    
    for ( j = 0; j < 3; j++)
    {
        printf("%d Notas: %.1f \n", i + 1, j + 1, notas[i][j] );
    }
    
}








return 0;
}