#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
 
int main (){
	setlocale(LC_ALL,"portuguese");
//Declarando Variaveis	
int primeiroNumero; 
int segundoNumero;
int soma;
float media;
int produto;
int maior;
int menor;

//Dados do �suario
printf("Digite o Primeiro N�mero:");
scanf("%i",&primeiroNumero);

printf("Digite o Segundo N�mero:");
scanf("%i",&segundoNumero);

//calculo dos resultados
media = (primeiroNumero + segundoNumero)/2;
soma = (primeiroNumero + segundoNumero);
produto = (primeiroNumero * segundoNumero);

//Resultado
printf("M�dia: %.1f \n", media);
printf("Soma: %i \n", soma);
printf("Produto: %i \n", produto);

if(primeiroNumero > segundoNumero){
printf("Maior N�mero: %i \n",primeiroNumero);
printf("Menor N�mero: %i \n",segundoNumero);

} else{
printf("Maior N�mero: %i \n",segundoNumero);	
printf("Menor N�mero: %i \n",primeiroNumero);
}

return 0;
}
