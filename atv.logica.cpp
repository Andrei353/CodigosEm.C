#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
 
int main (){
	setlocale(LC_ALL,"portuguese");
	
	//Declarando Vari�veis
	float primeiraNota;
	float segundaNota;
	float media;
	char nome [500];
	 
	//solicita��o do usu�rio
	printf("Digite sua primeira nota: ");
	scanf("%f",&primeiraNota);//leia
	
	printf("Digite sua segunda nota: ");
	scanf("%f",&segundaNota);//leia
	
    //calculando M�dia.
    media = (primeiraNota + segundaNota) / 2;

	
	
	//Exibindo dados do usu�rio
	printf("Primeira Nota: %.1f \n", primeiraNota);
	printf("Segunda Nota: %.1f \n", primeiraNota);
	printf("M�dia: %.1f \n", media);
	
	//situa��o  do aluno
	if (media >= 7){
		printf("Aprovado!");
   }    else{
   	printf("Reprovado!");
   	
   }
   
	return 0;
}
