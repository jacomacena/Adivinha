#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, tent = 1, seu_num, again = 1;

    do{
        num = rand()%99+1;
        printf("\nAdivinhe o numero que eu estou pensando: ");
        scanf("%d", &seu_num);

        while(seu_num != num){
            if(tent < 5){
                // Verificação do numero
                if(seu_num < num){
                    printf("\nO meu numero e maior que %d\n",seu_num);
                }else{
                    printf("\nO meu numero e menor que %d\n",seu_num);
                }
                tent++;

                printf("\nTente novamente: ");
                scanf("%d", &seu_num);
            }else{
                printf("Voce nao conseguiu acertar!\n");
                printf("Deseja jogar novamente?\n");
                printf("\n1 - Sim\n2- Nao\n");
                scanf("%d", &again);
                if(again==2) exit(1);
            }
        }

        printf("Parabens, voce acertou!\n");
        printf("O meu numero foi: %d\n\n", num);


        printf("Deseja jogar novamente?\n");
        printf("\n1 - Sim\n2- Nao\n");
        scanf("%d", &again);
        free(&num);

    }while(again==1);

    exit(1);

}
