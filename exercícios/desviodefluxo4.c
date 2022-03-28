#include <stdio.h>
#include <stdlib.h>

void main(){

    int destino, trecho;

    printf("Informe o destino conforme a tabela a seguir: \n");
    printf("1-Região Norte \t 3-Região Centro-Oeste \n");
    printf("2-Região Nordeste \t 4-Região Sul\n");
    scanf("%d", &destino);

    printf("Informe o trecho: <1-IDA ou 2-IDA E VOLTA>");
    scanf("%d", &trecho);

    if(destino == 1){
        if(trecho == 1)
            printf("Região Norte[IDA] = 500,00");
        else
            printf("Região Norte[IDA E VOLTA] = 900,00");
    }
    else if(destino == 2){
        if(trecho == 1)
            printf("Região Nordeste[IDA] = 350,00");
        else
            printf("Região Nordeste[IDA E VOLTA] = 650,00");
    }
    else if(destino == 3){
        if(trecho == 1)
            printf("Região Centro-Oeste[IDA] = 350,00");
        else
            printf("Região Centro-Oeste[IDA E VOLTA] = 600,00");
    }
    else {
        if(trecho == 1)
            printf("Região Sul[IDA] = 300,00");
        else
            printf("Região Sul[IDA E VOLTA] = 550,00");
    }
}