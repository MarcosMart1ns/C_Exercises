#include <stdio.h>
#include <stdlib.h>

int main(){
    /*
    Faça um programa que realize a soma de todos os valores inteiros de 1 a n, sendo que n deve
    ser informado pelo usuário.
     */
    long int valor,i,resultado = 0;

    printf("Digite um numero para realizarmos a soma dos valores inteiros ate ele:\n");
    scanf("%i",&valor);

    for(i=1;i<=valor;i++){
        resultado += i;
        printf("\n%i",resultado);
    }
    printf("\nO resultado final e: %i\n",resultado);
    system("pause");
    return 0;
}