#include <stdlib.h>
#include <stdio.h>

int main(){
int num,result;

printf("Escreve ae um numero:\n");
scanf("%d",&num);

if(num>20){
result = num*2;    
}else{
    result = num*4;
}
printf("Resultado e: %d\n",result);

system("pause");
return 0;
}