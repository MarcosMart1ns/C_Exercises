/*
Depois da liberação do governo para as mensalidades dos planos de saúde, as pessoas começaram a fazer
pesquisas para descobrir um bom plano, não muito caro. Um vendedor de um plano de saúde apresentou a
tabela a seguir. Faça um programa que entre com o nome de uma pessoa e uma opção de faixa de idade
dela (conforme a tabela) e imprima o nome e o valor que ela deverá pagar
    ate 10 -- 30
    1//   >10 ate 29 -- 60 
    2//   >29 ate 45 -- 120
    3//   >45 ate 59 --150
    4//   >59 ate 65 -- 250
    5//   >65 ------- 400
 */
#include <stdio.h>
#include <stdlib.h>

int main(){
    int id,cat;
    char nome[10];

    printf("Insira sua idade e lhe informaremos o plano de saude mais adequado para voce:\n");
    printf("Insira seu nome:");
    scanf("%s",&nome);
    printf("Insira a sua idade:\n");
    scanf("%d",&id); //idade 

    if(id<=10){
        cat = 1;
    }else if(id>10 && id<=29){
        cat = 2;
    }else if (id>29 && id<=45){
        cat = 3;
    }else if(id>45&& id <= 59){
        cat = 4;
    }else if (id>59 && id <=65){
        cat = 5;
    }else if(id>65){
        cat = 6;
    }
    switch(cat){
        case 1:
            printf("%s : o valor do seu plano de saude e: 30 Reais\n",nome);
            break;
        case 2:
            printf("O valor do seu plano de saude e: 60 Reais\n");
            break;
        case 3:
            printf("O valor do seu plano de saude e: 120 Reais\n");
            break;
        case 4:
            printf("O valor do seu plano de saude e: 150 Reais\n");
            break;
        case 5:
            printf("O valor do seu plano de saude e: 250 Reais\n");
            break;
        case 6:
            printf("O valor do seu plano de saude e: 400 Reais\n");
            break;
    }
    system("pause");
    return 0;
}