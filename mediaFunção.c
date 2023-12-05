#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>



int somar(int n1, int n2){
int resultado;
resultado = n1 + n2;
resultado = resultado / 2;    
return resultado;
}

void limpatela(){
  fflush(stdin);
  system("cls || clear");

}

void mostrardados(int primeiroNumero, int segundoNumero, int soma){
    printf("-1º Número: %i \n", primeiroNumero);
    printf("-2º Número: %i \n", segundoNumero);
    printf("Média: %i \n", soma);
}


int main()
{
    setlocale(LC_ALL, "portuguese");
//Declarando Variaveis
int primeiroNumero;
int soma; 
int segundoNumero;
int i;

//Solicitando Dados
printf("Digite o Primeiro Número: ");
scanf("%i", &primeiroNumero);
limpatela();

printf("Digite o Segundo Número: ");
scanf("%i", &segundoNumero);
limpatela();

//calculo da media
soma =  somar(primeiroNumero, segundoNumero);

//Resultado
mostrardados(primeiroNumero, segundoNumero, soma);





return 0;
}