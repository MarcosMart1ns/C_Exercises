#include <stdio.h>
#include <stdlib.h>

void divD(float a, float b){
    if(a==0||b==0){
        printf("Insira um numero diferente de zero");
    }else{
        printf("%.2f",a/b);
    }
}

int main(){
    float n1=0,n2=45;
    
    divD(n1,n2);
    system("pause");
    return 0;
}