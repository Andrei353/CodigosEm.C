#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

//Declarando Funções
void ParEImpar(int valor){
if (valor % 2 == 0){
	printf("Este Número é par ");
} else {
	printf("Este Número é impar");
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
printf("Digite um número: ");
scanf("%i",&numero);
limpatela();

//Mostrando resultados
ParEImpar(numero);













return 0;
}