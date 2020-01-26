/* Construa uma programa em C que armazene 15 números em um vetor e imprima uma listagem
numerada contendo o número e uma das mensagens: par ou ímpar */

#include <stdio.h>


int main(){
    int num[15]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,};
    int i;
    for(i=0;i<=14;i++){
        if(num[i]%2==0){
            printf("%i - %i\t Par\n",i,num[i]);
        }else{
            printf("%i - %i\t Impar\n",i,num[i]);
        }
    }

    return 0;
}