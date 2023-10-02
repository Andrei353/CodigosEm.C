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

//Solicitação do Usuário
printf("Digite o seu Código:");
gets(codigo);

printf("Digite o ano de seu nascimento:");
scanf("%i",&anoDeNascimento);

printf("Digite o tempo de trablho em Anos: ");
scanf("%i",&tempoDeTrabalho);
//calculando idade

idade = anoAtual - anoDeNascimento;

//avaliando

if ((idade >= 65) || (tempoDeTrabalho >= 30)){
	printf("Você pode se aposentar");
} else {
	printf("Não pode solicitar aposentadoria");
}
return 0;
}
