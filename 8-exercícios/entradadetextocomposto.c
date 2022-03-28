#include <stdio.h>
#include <stdlib.h>

void main(){

    system("clear");
    char produto[30];

    printf("Informe o nome do produto: \n");
    scanf("\n%[^\n]s", &produto);
    // "\n%[^\n]s", ... para frase composta ex: Arroz Integral

    printf("Produto: %s \n", produto);

}