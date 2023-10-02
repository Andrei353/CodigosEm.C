#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include <string.h>
 
int main (){
	setlocale(LC_ALL,"portuguese");
//Declarando Variaveis	
char login[500];
char senha[500];
char loginSalvo[500] = "Andrei";
char senhaSalva [500] = "123";
//Dados do Úsuario
printf("Digite o seu Login:");
gets(login);

printf("Digite sua senha:");
gets(senha);

//stringcompare
if (strcmp(login, loginSalvo) == 0 && strcmp(senha, senhaSalva) == 0){
	printf("Bem-Vindo!");
}else{
	printf("Acesso Negado!!!");
}

return 0;
}
