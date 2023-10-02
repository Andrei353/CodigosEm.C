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

//Dados do Úsuario
printf("Digite o Primeiro Número:");
scanf("%i",&primeiroNumero);

printf("Digite o Segundo Número:");
scanf("%i",&segundoNumero);

//calculo dos resultados
media = (primeiroNumero + segundoNumero)/2;
soma = (primeiroNumero + segundoNumero);
produto = (primeiroNumero * segundoNumero);

//Resultado
printf("Média: %.1f \n", media);
printf("Soma: %i \n", soma);
printf("Produto: %i \n", produto);

if(primeiroNumero > segundoNumero){
printf("Maior Número: %i \n",primeiroNumero);
printf("Menor Número: %i \n",segundoNumero);

} else{
printf("Maior Número: %i \n",segundoNumero);	
printf("Menor Número: %i \n",primeiroNumero);
}

return 0;
}
