#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    // Declarando Vari�veis

    int coluna = 3;
    int linha = 2;
    char diciplina[linha][250];
    char situacao[linha][250];
    float notas[linha][coluna];
    float soma = 0;
    float media[linha];
    int i, j;

    // Solicitando Dados
    for (i = 0; i < 3; i++)
    {
        printf("Digite a %i� Diciplina:", i + 1);
        gets(diciplina[i]);
        for (j = 0; j < 2; j++)
        {
            printf("Digite a %i� Nota:", j + 1);
            scanf("%f", &notas[i][j]);

            soma += notas[i][j];
        }

        media[i] = soma / 2;
        soma = 0;

        fflush(stdin);
        printf("\n");
    }

    system("cls || clear");
    printf("Calculando M�dia aritm�tica");
    for (i = 0; i < 3; i++)
    {
        printf(".");
        sleep(1);
    }
    sleep(1);
    system("cls || clear");

    printf("-----------------------\n");
    for (i = 0; i < 3; i++)
    {
        printf("%i� Diciplina: %s \n\n", i + 1, diciplina[i]);

        for (j = 0; j < 2; j++)
        {
            printf("%i� nota: %.2f \n", j + 1, notas[i][j]);

        if (media[i] >= 7)
        {
           printf("\nAprovado", situacao);
        }
        else if (media[i] >= 5)
        {
           printf("\nRecupera��o", situacao);
        }
        else
        {
            printf("\nReprovado", situacao);
        }
        }

        printf("\nM�dia: %.2f \n", media[i]);
        printf("----------------------------\n");

    }

    return 0;
}