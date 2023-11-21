#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    // Declarando Variáveis
    int i, j;
    int coluna = 3;
    int linha = 5;
    char banda[coluna][250];
    char integrante[coluna] [linha] [250];

    // Solicitando dados
    for (i = 0; i < coluna; i++)
    {
        printf("Digite a %iº Banda:", i + 1);
        gets(banda[i]);
        for (j = 0; j < linha; j++)
        {
            printf("Digite o %iº Integrante:", j + 1);
            gets(integrante[i][j]);
        }
        printf("\n");
    }

    system("cls || clear");
    printf("Calculando Média aritmética");
    for (i = 0; i < 3; i++)
    {
        printf(".");
        sleep(1);
    }
    sleep(1);
    system("cls || clear");

    for (i = 0; i < coluna; i++)
    {
        printf("%iº Banda :%s\n", i + 1, banda[i]);
        for (j = 0; j < linha; j++)
        {
            printf("%iº Integrantes: %s\n", j + 1, integrante[i][j]);
            
        }
        printf ("\n");
    }

    return 0;
}