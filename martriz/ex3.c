#include <stdio.h>

int main(){
    
    int umaEstranha_matriz[3][3]={{11,33,10},{10,66,90},{90,89,34}};
    int l,c,soma,coluna,linha;

    for(l=0;l<=2;l++){
        for(c=0;c<=2;c++){  
            printf("%i ",umaEstranha_matriz[l][c]*2);
        }
        printf("\n");
    }
        printf("\nElementos cujas as posicoes a soma da linha e da coluna forma um numero par:\n");

    for(l=0;l<=2;l++){
        for(c=0;c<=2;c++){ 
            linha=l+1;
            coluna= c+1; 
            soma = linha+coluna;
            if(soma %2==0){
            printf("%i ",umaEstranha_matriz[l][c]*2);
            }
        }
        printf("\n");
    }
    return 0;
}