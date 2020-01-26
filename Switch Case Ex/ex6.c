#include <stdio.h>
#include <stdlib.h>

int main(){
    /*
    Ler o numero do dia da semana e imprimir o seu respectivo nome por extenso. Considerar o numero 1
    como domingo, 2 para segunda etc. Caso o dia não exista (menor que 1 ou maior que 7), exibir a
    mensagem \Dia da semana invalido".
    */
    int dia;
    printf("Insira um numero e lhe iremos dizer o dia da semana correspondente:\n\n");
    scanf("%d",&dia);

    switch(dia){
        case 1:
            printf("\nHoje e domingo!\n");
            break;
        case 2:
            printf("\nHoje e Segunda!\n");
            break;
        case 3:
            printf("\nHoje e Terca!\n");
            break;
        case 4:
            printf("\nHoje e Quarta!\n");
            break;
        case 5:
            printf("\nHoje e Quinta!\n");
            break;
        case 6:
            printf("\nHoje e Sexta!\n");
            break;
        case 7:
            printf("\nHoje e Sabado!\n");
            break;
        default:
            printf("\nInsira um numero validado de 1 a 7\n");
            break;
    }

    system("pause");
    return 0;
}