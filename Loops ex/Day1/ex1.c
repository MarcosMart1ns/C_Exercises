#include <stdio.h>
#include <stdlib.h>

int main(){

    int i;
    float test;

    for(i=1;i<=20;i++){

        test = i % 2 ;   
        if(test == 0 ){
            printf("%i\n",i);
        }

    }

    system("pause");
    return 0;
}