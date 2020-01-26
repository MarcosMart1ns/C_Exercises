#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.14159265

float volume (float raio){
 
    float volume  = ((4/3) * (PI) * (pow(raio,3)));

    return volume;
}

int main (){
    float vol = 3; //3 litros 

    printf("\n%.2f\n",volume(vol));

    system("pause");
    return 0;
}