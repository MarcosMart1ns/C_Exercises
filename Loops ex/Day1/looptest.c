#include <stdio.h>
#include <stdlib.h>

int main(){
    float s = 1000.00,v;
    int op = 0;
    int cont = 0;
        while(op !=4){
            printf("\n 1. Deposito");
            printf("\n 2. Saque");
            printf("\n 3. Saldo");
            printf("\n 4. Sair\n");
            scanf("%d",&op);
                switch (op){
                    case 1:
                        printf("\n Valor do deposito? ");
                        scanf("%f",&v);
                        s=s+v;
                        break;
                    case 2:
                        printf("\n Valor do saque? ");
                        scanf("%f",&v);
                    case 3:
                        printf("\n Saldo atual = R$ %2.f \n",s);
                        break;
                    default: if(op!=4) printf("\n Opcao Invalida \n");

                }
            cont++;
        }
    printf("Fim das transações\n");
    system("pause");
    return 0;
}
