#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int passo,idade,st,st2;
    char nome[10],sexo[2];

    printf("Iremos coletar dados de 20 pessoas e exibir caso a pessoa tenha mais de 21 anos do sexo masculino:\n\n");
    for(passo=1;passo<=20;passo++){
        printf("\nInsira o seu nome:\n");
        scanf("%s",&nome);
        printf("Insira sua idade\n");
        scanf("%i",&idade);
        printf("Insira seu sexo: M ou F\n");
        scanf("%s",&sexo);
        
        st = strcmp(sexo,"M");
        st2 = strcmp(sexo,"m");

        
        if(idade>21 && (st == 0 || st2 == 0)){ 
            printf("\nNome: %s",nome);
            printf("\nIdade: %i",idade);
            printf("\nSexo: %s\n\n\n",sexo);
        }
    }

    system("pause");
    return 0;
}

