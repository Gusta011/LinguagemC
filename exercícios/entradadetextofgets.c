#include <stdio.h>
#include <stdlib.h>

void main(){

    system("clear");
    char produto[30];

    printf("Informe o nome do produto: \n");
    fgets(produto, 30, stdin);
    //fgets para texto composto com 2 ou mais frases melhor do que scanf

    printf("Produto: %s \n", produto);
}