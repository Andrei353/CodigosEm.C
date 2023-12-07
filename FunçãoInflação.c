#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>


// Declarando Funções

float inflacao(float precoDaInflacao){
    float resultado;
 if (precoDaInflacao < 100)
 {
    resultado = precoDaInflacao * 1.1;
 }
 else
 {
    resultado = precoDaInflacao * 1.2;
 }
 
 

 return resultado;
}




int main(){
   setlocale(LC_ALL, "portuguese");
//Declarando Variaveis
float valor, valorfinal;


//Solicitando Dados
printf("Digite o Valor do Produto:");
scanf("%f",&valor);

//Resultado
 valorfinal = inflacao(valor);

 printf("Valor Total: %.2f", valorfinal);






return 0;
}