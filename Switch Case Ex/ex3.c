#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa que leia um número inteiro entre 1 e 12 e escreva o mês correspondente. Caso o
usuário digite um número fora desse intervalo, deverá aparecer uma mensagem informando que não
existe mês com este número.
*/

int main(){
    int mes;

    printf("Digite um numero e informaremos o mes correspondente\n\n");
    scanf("%d",&mes);

    switch(mes){
        case 1:
            printf("\nEstamos no mes de Janeiro\n");
            break;
        case 2:
            printf("\nEstamos no mes de Feveireiro\n");
            break;
        case 3:
            printf("\nEstamos no mes de Marco\n");
            break;
        case 4:
            printf("\nEstamos no mes de Abril\n");
            break;
        case 5:
            printf("\nEstamos no mes de Maion\n");
            break;
        case 6:
            printf("\nEstamos no mes de Junho\n");
            break;
        case 7:
            printf("\nEstamos no mes de Julho\n");
            break;
        case 8:
            printf("\nEstamos no mes de Agosto\n");
            break;
        case 9:
            printf("\nEstamos no mes de Setembro\n");
            break;
        case 10:
            printf("\nEstamos no mes de Outubro\n");
            break;
        case 11:
            printf("\nEstamos no mes de Novembro\n");
            break;
        case 12:
            printf("\nEstamos no mes de Dezembro\n");
            break;
        default: 
            printf("Insira um numero correto de 1 a 12\n");
            break;
    }
    system("pause");
    return 0;
}