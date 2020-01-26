/*
Crie um programa em C para ler um conjunto de 20 números reais e informe:
• quantos números lidos são iguais a 30
• quantos são maior que a média
• quantos são iguais a média

*/

#include <stdio.h>

int igualtrinta;

eIgualaTrinta(int num){
    if(num==30){
        return 1;
    }
}

maiorqueMedia(int vet[20]){
    int i,soma,cont=0;
    for(i=0;i<=20;i++){
        soma+=vet[i];
    }
    for(i=0;i<=20;i++){
        if(vet[i]>(soma/20)){
            cont++;
        }
    }
    return cont;
}
igualAmedia(int vet[20]){
    int i,soma,cont=0;
    for(i=0;i<=20;i++){
        soma+=vet[i];
    }
    for(i=0;i<=20;i++){
        if(vet[i]=(soma/20)){
            cont++;
        }
    }
    return cont;
}


int main(){

    

    return 0;
}