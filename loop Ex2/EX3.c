#include <stdio.h>
#include <stdlib.h>

int main(){
    /*
    Desenvolver um programa que possibilite, dado um conjunto de valores inteiros e positivos (fornecidos um
    a um pelo usuário), determinar qual o menor valor deste conjunto. O final do conjunto de valores é
    conhecido através do valor zero, que não deve ser considerado.
    */
    int num,vezes,step,ncomp=0;

    printf("Vamos descobrir qual o menor numero\n");
    printf("Digite quantos numeros voce quer digitar\n");
    scanf("%i",&vezes);
        if(vezes<=0){
            printf("Digite um numero validp");
        }

    for(step = 1;step<=vezes;step++){ 
        
        printf("%i - Digite um numero:\n",step);
        scanf("%i",&num);
        
        if(num<=0){
            printf("Numero 0 ou negativo nao e considerado\n");
        }else{
            if(ncomp == 0){
                ncomp = num;
            }
            if(num<ncomp){
                ncomp = num;
            }
        }
            
    }
    printf("O menor numero e: %i\n",ncomp);

    system ("pause");
    return 0;
}