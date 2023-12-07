#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

#define t 6
// Declarando Funções
int pares(int valor[])
{
    int j, conatdorPar = 0;
    for (j = 0; j < t; j++)
    {
        if (valor[j] % 2 == 0)
        {
            conatdorPar++;
        }
    }
    return conatdorPar;
}

int impares(int valor[])
{
    int j, conatdorImpar = 0;
    for (j = 0; j < t; j++)
    {
        if (valor[j] % 2 != 0)
        {
            conatdorImpar++;
        }
    }
    return conatdorImpar;
}

int main()
{
    setlocale(LC_ALL, "portuguese");
    // Declarando Variaveis
    int i;
    int numero[t];
    int par;
    int impar;

    // Solicitando Dados
    for (i = 0; i < t; i++)
    {
        printf("Digite o %iº Número:", i + 1);
        scanf("%i", &numero[i]);
    }

    par = pares(numero);
    impar = impares(numero);

    printf("Quantidade de Par: %i \n", par);
    printf("Quantidade de Impar: %i \n", impar);

    return 0;
}