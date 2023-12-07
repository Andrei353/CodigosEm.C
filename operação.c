#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

#define T 2

float soma (int n1, int n2){
return n1 + n2;
}

float subtracao (int n1, int n2){
return n1 - n2;
}

float divisao (float n1, float n2){
return n1 / n2;    
}

float mutiplicacao (float n1, float n2){
return n1 * n2;
}

int main(){
setlocale(LC_ALL, "portuguese");
//Declarando Variaveis 
float primeiroNumero;
float segundoNumero;
float conta1, conta2, conta3, conta4;

//Solicitando Dados
printf("Digite o 1º Número: ");
scanf("%f",&primeiroNumero);
printf("Digite o 2º Número: ");
scanf("%f",segundoNumero);


conta1 = soma(primeiroNumero,segundoNumero);
conta2 = subtracao(primeiroNumero,segundoNumero);
conta3 = divisao(primeiroNumero,segundoNumero);
conta4 = mutiplicacao(primeiroNumero,segundoNumero);
//Resultado 

printf("Primeiro Número: %.1f \n", primeiroNumero);
printf("Segundo Número: %.1f \n",segundoNumero);
printf("Soma: %.1f \n", conta1);
printf("Subtração: %.1f \n", conta2);
printf("Divisão: %.1f \n", conta3);
printf("Mutiplicação: %.1f \n", conta4);








return 0;
}