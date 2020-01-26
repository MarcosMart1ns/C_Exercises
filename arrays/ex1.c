/*
 Faça um programa em C que armazene 15 números inteiros em um vetor e depois permita que o
usuário digite um número inteiro para ser buscado no vetor, se for encontrado o programa deve imprimir
a posição desse número no vetor, caso contrário, deve imprimir a mensagem: "Não encontrado!".

 */

#include <stdio.h>

int main(){
    int num[15],i,proc,enc=0;
    int arrPos[15],countP=0;
    // int num[14] = {1,2,3,4,5,1,2,4,6912,2,393} tambem funciona

    printf("Insira 15 valores:\n");
    
    for(i=0;i<=14;i++){
        printf("%i- ",i);
        scanf("%i",&num[i]);
        
    }

    printf("Insira um valor para verificar se existe dentro do vetor: ");
    scanf("%i",&proc);
    
    for(i=0;i<=14;i++){
        if(proc == num[i]){
            enc = 1;
            arrPos[countP] = i;
            countP++;
        }
    }   

    if(enc==1){
        printf("Numero %i encontrado nas posicoes: \n", proc );
        for(i=0;i<=(countP-1);i++){
            printf("%i,",arrPos[i]);
        }
    }else{
        printf("Numero %i nao encontrado!\n",proc);
    }
    
    printf("\n");
    system("pause");
    return 0;
    }