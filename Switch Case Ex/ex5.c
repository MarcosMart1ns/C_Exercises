#include <stdio.h>
#include <stdlib.h>


int main(){
    /*
        Crie um programa que informe a quantidade total de calorias de uma refeição a partir da escolha do
usuário que deverá informar o prato, a sobremesa, e bebida conforme a tabela a seguir
    */
   int prato,sobremesa,bebida,escolha,kcal;

   printf("Calculando a quantidade total de calorias ingeridas:\n");
   //prato
   printf("\nEscolha o prato:\n");
   printf("1. Vegetariano\n2. Peixe\n3. Frango\n4. Carne\n");
   scanf("%d",&escolha);

    switch(escolha){
        case 1:
            prato = 180;
            break;
        case 2: 
            prato = 230;
            break;
        case 3: 
            prato = 250;
            break;
        case 4: 
            prato = 350;
            break;
        default:
            printf("Escolha a opção correta de 1 a 4");
            break;
    }
    escolha = 0;
//Sobremesa
   printf("\nEscolha uma sobremesa:\n");
   printf("1. Abacaxi\n2. Sorvete diet\n3. Mousse diet\n4. Mousse Chocolate\n");
   scanf("%d",&escolha);
    switch(escolha){
        case 1:
            sobremesa = 75;
            break;
        case 2: 
            sobremesa = 110;
            break;
        case 3: 
            sobremesa = 170;
            break;
        case 4: 
            sobremesa = 200;
            break;
        default:
            printf("Escolha a opção correta de 1 a 4");
            break;
    }
    escolha = 0;
//Bebida
   printf("\nEscolha uma bebida:\n");
   printf("1. Cha\n2. Suco de Laranja\n3. Suco de Melao\n4. Refrigerante diet\n");
   scanf("%d",&escolha);
    switch(escolha){
        case 1:
            bebida = 20;
            break;
        case 2: 
            bebida = 70;
            break;
        case 3: 
            bebida = 100;
            break;
        case 4: 
            bebida = 65;
            break;
        default:
            printf("Escolha a opção correta de 1 a 4");
            break;
    }
//Soma
    kcal = prato+bebida+sobremesa;
    printf("\n\nVoce ingeriu um total de %d kcal. \n",kcal);

    system("pause");
    return 0;
}