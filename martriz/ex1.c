#include <stdio.h>

int main(){
    
    int umaEstranha_matriz[3][3]={{11,33,10},{10,66,90},{90,89,34}};
    int l,c;
    for(l=0;l<=2;l++){
        for(c=0;c<=2;c++){  
            printf("%i ",umaEstranha_matriz[l][c]);
        }
        printf("\n");
    }

    return 0;
}