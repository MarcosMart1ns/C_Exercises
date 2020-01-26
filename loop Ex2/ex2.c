#include <stdio.h>
#include <stdlib.h>

int main(){
    /*
    Escrever um programa para ler a matrícula de um aluno e suas três notas e calcular
    a média ponderada do aluno, considerando que o peso para a maior nota seja 4 e para as duas restantes, 
    3. Mostrar ao final, a média calculada e uma mensagem “APROVADO" se a média 
    for maior ou igual a 6 e “REPROVADO" casocontrário. Repetir a operação até que o
     usuário digite 0 (zero) para a matrícula
    */

    int id = 1;
    float nota1,nota2,nota3,media,peso4 = 0.4,peso3 = 0.3,maior;

    while(id != 0){

        printf("\nDigite sua matricula(digite 0 para sair):\n");
        scanf("%i",&id);
        if(id == 0 ){
            break;
        }
        //Recebe as notas
        printf("\nAgora digite a sua primeira nota\n");
        scanf("%f",&nota1);
        printf("\nAgora digite a sua segunda nota\n");
        scanf("%f",&nota2);
        printf("\nAgora digite a sua terceira nota\n");
        scanf("%f",&nota3);
        //Compara qual a maior nota
        //
        if(nota1>nota2 && nota1>nota3){
            media = (nota1*0.4)+(nota2*0.3)+(nota3*0.3);
            maior = nota1;
        }else if(nota2>nota1 && nota2>nota3){
            media = (nota1*0.3)+(nota2*0.4)+(nota3*0.3);
            maior = nota2;
        }else if(nota3>nota1 && nota3>nota2){
            media = (nota1*0.3)+(nota2*0.3)+(nota3*0.4);
            maior = nota3;
        }
        //Mostra se aprovado ou nao
        if(media>=6){
            printf("\nO aluno foi APROVADO!!! A sua nota foi: %.2f\nE sua maior nota e: %.2f\n",media,maior);
        }else{
            printf("\nO aluno foi REPROVADO!!! A sua nota foi: %.2f\nE sua maior nota e: %.2f\n",media,maior);
        }
        printf("\n\nRecarregando e executando novamente....\n\n");
        system("pause");
    }

    system("pause");
    return 0;
}