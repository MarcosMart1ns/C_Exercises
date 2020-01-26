#include <stdlib.h>
#include <stdio.h>

int main(){
    int num1,num2;

    printf("Qual o maior numero?Digite abaixo dois numeros\n");
    printf("Digite o primeiro numero:\n");
    scanf("%d",&num1);
    printf("Digite o segundo numero:\n");
    scanf("%d",&num2);

    if(num1>num2){
        printf("O numero %d e o maior numero\n", num1);
    }else{
        printf("O numero %d e o maior numero\n", num2);
    }
system("pause");
return 0;
}

