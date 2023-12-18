#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
#include <string.h>
#include <time.h>

#define SIZE 2

//Declarando Funções e Struct
struct dadosAluno{
    char nome[250];
    float notas[SIZE];
    float media;
};

float mediaFinal(float notas[]){
    int i;
    float soma = 0;
    for(i = 0; i < SIZE; i++){
        soma += notas[i];
    }
    return soma / 2;
}

void situacao (float media){
    if(media >= 7){
        printf("\nAprovado!!!\n");
    } else{
        printf("\nReprovado!!!\n");
    }
}

int main(){
     setlocale (LC_ALL, "portuguese" );    
    int i, j;
    struct dadosAluno aluno[SIZE];
    
for(i = 0; i < SIZE; i++){    
    printf("Digite o nome do %dª Aluno: ", i+1);
    gets(aluno[i].nome);
    
    for(j = 0; j < SIZE; j++){
       printf("Digite a %dª Nota: ", j+1);
       scanf("%f",&aluno[i].notas[j]);
    }    
    
    aluno[i].media = mediaFinal(aluno[i].notas);
  
    setbuf(stdin,0);
    printf("\n");
}

for(i = 0; i < SIZE; i++){
    printf("%dª Aluno: %s \n", i+1, aluno[i].nome);
    
    for(j = 0; j < SIZE; j++){
        printf("%dª Nota: %.2f \n", j+1, aluno[i].notas[j]);
    }
    
    printf("Média: %.2f \n", aluno[i].media);
    
    situacao(aluno[i].media);
}

    
return 0;    
}
