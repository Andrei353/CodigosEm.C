#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
 
int main (){
	setlocale(LC_ALL,"portuguese");
//Declarando Vari�veis
int numero;
int par;
int impar;
//Escolha do usuario
printf("Escolha um N�mero:");
scanf("%i",&numero);

//Limpa Terminal
system("cls || clear");


//Registro de Dados do Usu�rio

if (numero % 2 == 0){
	printf("Este N�mero � par ", par);
} else {
	printf("Este N�mero � impar", impar);
}

return 0;
}

