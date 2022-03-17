/*Programa para exibir o saláriodo cargo
de acordo com a escolha do usuário*/

#include <stdio.h>

int main(){

    int opcao = 0;

    //comando para limpar a terra
    system("clear");//clear screen (limpar tela)

    printf("##########################################################################");
    printf("\n#\t Programa para exibir salário\t\t\t#\n");
    printf("#########################################################################\n");
    printf("\nEscolha um dos cargos abaixo digitando o número correspondente\n");
    printf("\t1 - Diretor\n\t2 - Gerente\n\t3 - Analista\n\t4 - Assistente\n\t5 - Auxiliar\n");
    printf("-------------------------------------------\n");
    scanf("%d", &opcao);

    //switch para dar o resultado da escolha do usuário
    switch(opcao){
        case 1:
            printf("O salário do Diretor é 15,000,00\n");
            break;
        case 2:
            break;
            printf("O salário do gerente é: 12,000,00\n");
        case 3:
            break;
            printf("O salário do analista é: 8000,00\n");
        case 4:
            printf("O salário do assistente é: 4000,00\n");
            break;
        case 5:
            printf("O salário do auxiliar é: 2000,00\n");
            break;

        default:
            printf("Não há salário.\n");
            break;
    }

    return 0;
}