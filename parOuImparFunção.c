#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

//Declarando Fun��es
void ParEImpar(int valor){
if (valor % 2 == 0){
	printf("Este N�mero � par ");
} else {
	printf("Este N�mero � impar");
}

}

void limpatela(){
  fflush(stdin);
  system("cls || clear");
}


int main()
{
    setlocale(LC_ALL, "portuguese");
//Declarando variaveis
int numero;

//Solicitando dados
printf("Digite um n�mero: ");
scanf("%i",&numero);
limpatela();

//Mostrando resultados
ParEImpar(numero);













return 0;
}