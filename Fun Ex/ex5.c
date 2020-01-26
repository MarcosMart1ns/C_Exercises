#include <stdio.h>
#include <stdlib.h>

void dobrode3num(int a,int b,int c){
    
    printf("\n%i",a*2);
    printf("\n%i",b*2);
    printf("\n%i\n",c*2);

}

int main (){

    int num1=4,num2=6,num3=2;
    
    dobrode3num(num1,num2,num3);

    return 0;
}