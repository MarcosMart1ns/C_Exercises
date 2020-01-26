#include <stdio.h>
#include <stdlib.h>


int main(){
    /*
    Faça um programa que solicita dois números e 
    funcione através do menu a seguir:
    1-Soma
    2-Subtração
    3-Multiplicação
    4-Divisão
    5-Sair do programa
    */
    int opcao,n1,n2;
    float resultado;
    
    
    printf("\nEscolha uma opcao no menu:");
    printf("\n1. Soma\n2. Subtracao\n3. Multiplicacao\n4. Divisao\n5. Sair do programa\n");
    scanf("%i",&opcao);
    switch(opcao){  
        case 1: //Soma
            printf("Insira dois numeros para efetuarmos uma Soma: \n");
            printf("Insira o primeiro numero:\n");
            scanf("%i",&n1);
            printf("Insira o segundo numero:\n");
            scanf("%i",&n2);
            resultado = n1+n2;
            printf("O resultado e: %.2f\n",resultado);
            break;
        case 2: //Sub
            printf("Insira dois numeros para efetuarmos a Subtracao: \n");
            printf("Insira o primeiro numero:\n");
            scanf("%i",&n1);
            printf("Insira o segundo numero:\n");
            scanf("%i",&n2);
            resultado = n1-n2;
            printf("O resultado e: %.2f\n",resultado);
            break;
        case 3://Mult
            printf("Insira dois numeros para efetuarmos a Multiplicacao: \n");
            printf("Insira o primeiro numero:\n");
            scanf("%i",&n1);
            printf("Insira o segundo numero:\n");
            scanf("%i",&n2);
            resultado = n1*n2;
            printf("O resultado e: %.2f\n",resultado);
            break;
        case 4://Div
            printf("Insira dois numeros para efetuarmos a Divisao: \n");
            printf("Insira o primeiro numero:\n");
            scanf("%i",&n1);
            printf("Insira o segundo numero:\n");
            scanf("%i",&n2);
            resultado = n1/n2;
            printf("O resultado e: %.2f\n",resultado);
            break;
        case 5: //Sair
            printf("Saindo do programa.....");
            break;
        default:
            printf("Opcao Invalida.\nSaindo do programa.....");
            break;
    }

    system("pause");
    return 0;
}