#include <stdlib.h>
#include <stdio.h>

int main(){
    float sal,reajust;
    int cargo;

    printf("Vamos calcular seu salario\n\n");
    printf("Insira o numero conrespondente ao seu cargo abaixo: \n");
    printf("1. Auxiliar de escritorio \n2. Secretario(a)\n3. Cozinheiro(a)\n4.Entregador(a)\n");
    scanf("%d",&cargo);
    printf("Insira seu salario atual:\n");
    scanf("%f",&sal);

    if(cargo==1){
        reajust = sal*0.07;
    }else if(cargo == 2){
        reajust = sal*0.09;
    }else if(cargo == 3){
        reajust = sal*0.05;
    }else if(cargo == 4){
        reajust = sal*0.12;
    }else{
        printf("insira um numero correto");
    }
    printf("O seu salario reajustado e: %.f\n",sal+reajust);
    system("pause");

    return 0;
} 