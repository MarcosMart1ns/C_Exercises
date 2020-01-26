#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
    char password[20];
    int retorno;
    printf("Insira a senha de ate 20 caracteres e sem espacos:\n");
    scanf("%s",&password);

    retorno = strcmp(password,"marcos123");

    printf("%d\n",retorno); 

    if(retorno == 0){
        printf("AEEEE A senha esta correta!\n");
    }else{
        printf("Acho que a senha esta incorreta )= \n");
    }

    system("pause");
    return 0;
}