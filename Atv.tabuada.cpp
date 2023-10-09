#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include <ctype.h>
 
int main (){
	setlocale(LC_ALL,"portuguese");

    int i;

    //mostrar de 1 ate 10.
    //para i de 1 ate 10 passo 1 faça

for (i = 1; i <= 10; i++) {
     printf("3 * %d = %d \n", i, i*3);
    }
     
for (i = 1; i <= 10; i++){
	printf("5 * %d = %d \n", i, i*5);
}

for (i = 1; i <= 10; i++){
    printf("7 * %d = %d \n", i, i*7);
}
    return 0;
}
