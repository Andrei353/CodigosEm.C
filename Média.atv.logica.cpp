#include<stdio.h>
#include<stdlib.h>
#iclude<locale.h>
 
int main (){
	setlocale(LC_ALL,"portuguese");
	
	//Declarando Vari�veis
	float primeiraNota;
	float segundaNota;
	float media;
	 
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
	
	return 0;
}
