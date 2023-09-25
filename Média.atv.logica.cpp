#include<stdio.h>
#include<stdlib.h>
#iclude<locale.h>
 
int main (){
	setlocale(LC_ALL,"portuguese");
	
	//Declarando Variáveis
	float primeiraNota;
	float segundaNota;
	float media;
	 
	//solicitação do usuário
	printf("Digite sua primeira nota: ");
	scanf("%f",&primeiraNota);//leia
	
	printf("Digite sua segunda nota: ");
	scanf("%f",&segundaNota);//leia
	
    //calculando Média.
    media = (primeiraNota + segundaNota) / 2;

	
	
	//Exibindo dados do usuário
	printf("Primeira Nota: %.1f \n", primeiraNota);
	printf("Segunda Nota: %.1f \n", primeiraNota);
	printf("Média: %.1f \n", media);
	
	return 0;
}
