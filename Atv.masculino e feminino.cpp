#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include <string.h>
 
int main (){
	setlocale(LC_ALL,"portuguese");
//Declarando Variaveis
   char sexo;
   float altura;
   float peso;

    // Solicitando dados do usuário

    printf("Qual é o seu Sexo:");
    scanf("%c", &sexo);
    printf("Quanto tem de Altura:");
	scanf("%f",&altura);
	
	//Limpando tela
	system("clear || cls");
	
	//Switch Case 
	switch (sexo)
	{
	case 'M':
	peso = (72.7 * altura) - 58;	
	printf("Seu Peso: %.1f \n", peso);
	break;
	
	case 'F':
	peso = (62.1 * altura) - 44.7;
	printf("Seu Peso: %.1f \n", peso);
	break;
	
	default:
	printf("Sexo não reconhecido");
	break;				
	}
	
	//Resultados 
	printf("Seu Sexo: %c \n", sexo);
	printf("Sua Altura: %.2f \n", altura);
    return 0;
}
