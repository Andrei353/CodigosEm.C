#include<stdio.h>
#include<stdlib.h>

int main (){
	
	//Declarando Variáveis
	int idade;
	
	//solicitação do usuário
	printf("Digite sua idade:");
	scanf("%d",&idade);
	
	//Limpa Tela (Limpa o terminal)
	system("cls || clear");
	
	//Exibindo dados do usuário
	printf("Idade: %d", idade);
	
	return 0;
}
