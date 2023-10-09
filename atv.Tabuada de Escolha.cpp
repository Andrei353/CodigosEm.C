#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

 
int main (){
	setlocale(LC_ALL,"portuguese");

  int i;
  int numero;

  printf ("Escolha um Número de 1 até 10: ");
  scanf("%i",&numero);

    for (i = 1; i <= 10; i++) {
        printf("%i * %i = %i \n", numero, i, i * numero);
    }

    return 0;
}
