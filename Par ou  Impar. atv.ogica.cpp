#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
 
int main (){
	setlocale(LC_ALL,"portuguese");
//Declarando Variáveis
int numero;
int par;
int impar;
//Escolha do usuario
printf("Escolha um Número:");
scanf("%i",&numero);

//Limpa Terminal
system("cls || clear");


//Registro de Dados do Usuário

if (numero % 2 == 0){
	printf("Este Número é par ", par);
} else {
	printf("Este Número é impar", impar);
}

return 0;
}

