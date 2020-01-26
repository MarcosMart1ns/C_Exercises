/*
Faça um programa que armazene 8 números em um vetor e imprima todos os números. Ao final,
imprima o total de números múltiplos de seis.
*/

#include <stdio.h>


int main(){
    int i=0,num[8],mult=0;

    printf("Insira 8 valores descobriremos quantos sao multiplos de seis:\n");

    for(i=0;i<=7;i++){
        printf("%i- ",i);
        scanf("%i",&num[i]);
    }
    
    printf("\nOs valores no vetor sao:\n");

    for(i=0;i<=7;i++){
        printf("%i - %i\n",i,num[i]);
        if(num[i]%6==0){
            mult++;
        }
    }
    printf("O total de numeros multiplos de seis e: %i",mult);
    return 0;
}