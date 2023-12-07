//escreva um programa que permita ler 3 notas de um aluno e informe por meio de funções á media;
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

#define t 3
//Defininfo Funções
float mediaTotal(float valor[]){
    float soma = 0;
   int j;

   for ( j = 0; j < t; j++)
   {
    soma += valor[j];
   }
   
   return soma / t;

}
 char* situacao (float media){
    char resultado [250];
 media >= 7 ? strcpy(resultado, "Aprovado") : strcpy(resultado, "Reprovado");
 return resultado;
 }


int main()
{
    setlocale(LC_ALL, "portuguese");
float notas[t], media;
int i;

//solicitando Dados
for ( i = 0; i < t; i++)
{
    printf("Digite a %iº Número:", i+1);
    scanf("%f",&notas[t]);
}

//Resultado
 media = mediaTotal(notas[t]);

 for ( i = 0; i < t; i++)
 {
    printf("Notas %iº : %.1f \n", notas[t]);
 }
 
 printf("Média: %.1f \n", media);
 printf("Situação; %s \n", situacao(media));



return 0;
}    
