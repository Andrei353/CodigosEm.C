#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
 
int main (){
	setlocale(LC_ALL,"portuguese");
	
	//Declarando Variáveis
	float primeiraNota;
	float segundaNota;
	float media;
	char nome [500];
	 
	//solicitação do usuário
	printf("Digite sua primeira nota: ");
	scanf("%f",&primeiraNota);//leia
	
	printf("Digite sua segunda nota: ");
	scanf("%f",&segundaNota);//leia
	
    //calculando Média.
    media = (primeiraNota + segundaNota) / 2;

	
	
	//Exibindo dados do usuï¿½rio
	printf("Primeira Nota: %.1f \n", primeiraNota);
	printf("Segunda Nota: %.1f \n", primeiraNota);
	printf("Média: %.1f \n", media);
	
	//situação  do aluno
	if (media >= 7){
		printf("Aprovado!");
   }    else{
   	printf("Reprovado!");
   	
   }
   
	return 0;
}
