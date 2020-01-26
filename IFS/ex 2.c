#include <stdio.h>
#include <stdlib.h>

int main(){
    float vxerox;
    int copias;

    printf("Quantas copias serao impressas?\n");
    scanf("%d",&copias);

    if (copias>100){
        vxerox = copias*0.20;
    }else{
        vxerox = copias*0.25;
    }
    
    printf("O valor total de %d copias e de R$ %2.f Reais \n",copias,vxerox);

    system("pause");
    return 0;
}