#include<stdio.h>
#include<stdlib.h>

int main (){
	
	//Declarando Vari�veis
	int idade;
	
	//solicita��o do usu�rio
	printf("Digite sua idade:");
	scanf("%d",&idade);
	
	//Limpa Tela (Limpa o terminal)
	system("cls || clear");
	
	//Exibindo dados do usu�rio
	printf("Idade: %d", idade);
	
	return 0;
}
