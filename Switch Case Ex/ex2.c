#include <stdio.h>
#include <stdlib.h>

int main(){
    /*
    Faça um programa que permita entrar com o salário de uma pessoa e imprima o desconto do INSS segundo
    a tabela seguir:
        /*salario                     Faixa de desconto
        <=600           ---- isento
        >600 && <=1200   -- 20%
        >1200 && <= 2000 --- 25%
        >2000            ---- 30%*/

    
   float sal;
   int cat;

   printf("Insira seu salario e iremos verificar qual o desconto de inss no seu salario");
   printf("\nInsira seu salario:\n");
   scanf("%f",&sal);

    if(sal<=600) {
        cat = 1 ;
    }else if (sal>600 && sal <=1200){
        cat = 2;
    }else if (sal>1200&& sal<=2000){
        cat = 3;
    }else if (sal>2000){
        cat = 4;
    }
    switch(cat){
        case 1:
            printf("\nVoce sera isento do desconto!!\n");
            break;
        case 2:
            printf("\nO seu desconto sera de 20 porcento\n");
            break;
        case 3:
            printf("\nO seu desconto sera de 25 porcento \n");
            break;
        case 4:
            printf("\nO seu desconto sera de 30 porcento\n");
            break;
        default:
            printf("Insira um valor correto");
            break;
    }
    system("pause");
    return 0;
}
