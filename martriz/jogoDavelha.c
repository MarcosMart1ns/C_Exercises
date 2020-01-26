#include <stdio.h>
#include <conio.h>
#include <string.h>

int main(){
    int umaMatrizqualquer[3][3]={{0,0,0},{0,0,0},{0,0,0}};
    int vitoria1[3][3]={{1,2,0},{1,2,0},{1,0,0}};
    
    printf("\n");
    int i,j,p=1,linha,coluna,venceu=0;
    inicio:
    while(venceu==0){
    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
            printf("%i ",umaMatrizqualquer[i][j]);
        }
        printf("\n");
    }

    
    printf("\nJogador %i sua vez! Faca sua jogada com sabedora: \n",p);
    printf("Escolha a Linha: ");
    scanf("%i",&linha);
    printf("Escolha a coluna: ");
    scanf("%i",&coluna);

        if(linha>3 || linha<1 || coluna >3 || coluna <1 || umaMatrizqualquer[linha-1][coluna-1]!=0){
            printf("\nJogada Invalida, tente novamente\n");
            system("pause");
            system("cls");
            goto inicio;
        }
        printf("%i",venceu);
        system("pause");
    system("cls");
    umaMatrizqualquer[linha-1][coluna-1]=p;
    if(p==1){
        p=2;
    }else if(p==2){
        p=1;
    }
    if(strcmp(umaMatrizqualquer,vitoria1)==0){
        venceu = 1;
    }
}
    return 0;
}