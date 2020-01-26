#include <stdio.h>
#include <stdlib.h>

int main(){
    int num;

    printf("Escreva um numero ae:\n");
    scanf("%d",&num);
    if(num>10){
        printf("Esse numero e maior que 10\n");
    }else{
        printf("Esse numero nao e maior que 10\n");
    }
    system("pause");
    return 0;
}