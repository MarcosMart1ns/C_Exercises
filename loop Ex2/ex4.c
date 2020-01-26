#include <stdio.h>
#include <stdlib.h>

int main(){

    /*
    Elaborar um programa para calcular N! (fatorial de N). O valor inteiro N será fornecido pelo usuário. O
    algoritmo encerra quando se digita um número menor do que 1. Considerar, por definição, que:
    N! = N * (N-1) * (N-2) * ... * 3 * 2 * 1 e 0! = 1
    Exemplo: 5! = 5*4*3*2*1 = 120
    */

    unsigned long fat;
    int num,i,j=1;

    printf("Digite um numero e faremos a fatorial\n");
    scanf("%i",&num);
    
    if(num<1){
        printf("Insira um numero valido:\n");
    }else{
        fat = num;
        
        for(i=num;i>1;i--){
            fat*=(num-j); //5-1
            printf("%i * %i - %i\n",fat,num,j);
            j++;
        }
    }

    printf("O resultado e: %i\n",fat);
    system  ("pause");
    return 0;
}