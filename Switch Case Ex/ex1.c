#include <stdio.h>
#include <stdlib.h>

int main (){
    /*
    Escreva um programa que informe a categoria de um jogador de futebol,
     considerando sua idade: infantil
    (até 13 anos), juvenil (até 17 anos) ou sênior (acima de 17 anos).
     */

    int id,cat;
    
    printf("Iremos descobrir a sua categoria no futebol: \n");
    printf("Qual a sua idade? \n");
    scanf("%d",&id);

    if(id <= 13){
        cat = 1;
    }else if (id>13 && id <=17){
        cat = 2;
    }else if (id>17){
        cat = 3;
    }

    switch(cat){
        case 1:
            printf("\nVoce tem %i anos.\nA sua categoria e: infantil\n",id);
            break;
        case 2:
            printf("\nVoce tem %i anos.\nA sua categoria e: juvenil\n",id);
            break;
        case 3:
            printf("\nVoce tem %i anos.\nA sua categoria e: senior\n",id);
            break;
        default:
            printf("Insira uma idade válida");
        break;
    }
    system("pause");
    return 0;
}
