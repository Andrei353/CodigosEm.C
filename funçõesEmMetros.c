#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>


// Declarando Funções

float centimetro (float valor){
    return valor * (float) 100;
}

int main()
{
    setlocale(LC_ALL, "portuguese");
//Declarando Variaveis
float numero, conclusao;

//Solicitando dados
printf("Informe a quantidade (em Metros): ");
scanf("%f",&numero);

conclusao = centimetro(numero);


//Resultado
printf("Centimetros: %.2f", conclusao);
return 0;
}