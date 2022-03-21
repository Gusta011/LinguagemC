/*
Programa para manter a tela sempre ativa. Caso
o usuário digite 9, então a tela será liberada
*/
#include <stdio.h>

int main(){
    int op = 0;
    printf("Digite um número para sair e tecle ENTER\n");
    scanf("%d", &op);
    while(op != 9){
        system("clear");
        printf("\n Você errou ..... !!! ");

        printf("Tente outra vez e tecle ENTER\n");
        scanf("%d", &op);
    }

    return 0;
}