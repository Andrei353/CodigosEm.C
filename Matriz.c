#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include <string.h>
 
int main (){
	setlocale(LC_ALL,"portuguese");

int numero[2][2];
int i,j;

printf("Digite os elementos do Vetor: \n");

for ( i = 0; i < 2; i++)
{
  for ( j = 0; j < 2; j++)
  {
    printf("Elementos da linha %d coluna %d:", i + 1, j + 1 );
    scanf("%d",&numero[i][j]);
  }
  

}

for ( i = 0; i < 2; i++)
{
    for ( j = 0; j < 2; j++)
    {
       printf("Elementos da linha %d coluna %d: %d \n", i + 1, j + 1, numero[i][j]);
    }
    
}








return 0;
}