#include <stdio.h>
#include <stdlib.h>

int main(){

        /*
        Chico tem 1,50 metro e cresce 2 centímetros por ano, enquanto Zé tem 1,40 metro e cresce 3 centímetros
        por ano. Construir um programa para calcular e imprimir quantos anos serão necessários para que Zé seja
        maior que Chico.    
        */

       float chico = 1.50, ze = 1.40;
       int ano = 0;

       printf("Iremos descobrir em quantos anos Ze sera maior que Chico\n");

       while(chico>ze){
           ze += 0.03; 
           chico += 0.02;
           ano++;
       }
        printf("\nZe ficou maior que chico em %i anos\n",ano);

    system("pause");
    return 0;
}