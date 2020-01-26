#include <stdio.h>
#include <stdlib.h>

float avr4num(float a, float b, float c, float d){
    
    return (a+b+c+d)/4;
}

int main(){
    float n1=4,n2=5,n3=8,n4=9;
    printf("%.2f", avr4num(n1,n2,n3,n4));
    return 0;
}