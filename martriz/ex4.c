#include <stdio.h>

int main(){
    
    int matrizA[2][2]={{2,2,},{4,3}};
    int matrizB[2][2]={{4,4},{6,6}};
    int soma[2][2];
    int l,c;
    for(l=0;l<=1;l++){
        for(c=0;c<=1;c++){  
            soma[l][c] = matrizA[l][c] + matrizB[l][c];
            printf("%i ",soma[l][c]);
        }
        printf("\n");
    }

    return 0;
}