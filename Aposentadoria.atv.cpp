#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include <string.h>
 
int main (){
	setlocale(LC_ALL,"portuguese");
//Declarando Variaveis
char codigo [500];
int anoAtual = 2023;	
int idade;
int tempoDeTrabalho;
int anoDeNascimento;
int menor;

//Solicita��o do Usu�rio
printf("Digite o seu C�digo:");
gets(codigo);

printf("Digite o ano de seu nascimento:");
scanf("%i",&anoDeNascimento);

printf("Digite o tempo de trablho em Anos: ");
scanf("%i",&tempoDeTrabalho);
//calculando idade

idade = anoAtual - anoDeNascimento;

//avaliando

if ((idade >= 65) || (tempoDeTrabalho >= 30)){
	printf("Voc� pode se aposentar");
} else {
	printf("N�o pode solicitar aposentadoria");
}
return 0;
}
