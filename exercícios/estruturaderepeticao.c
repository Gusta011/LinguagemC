#include <stdio.h>
#include <stdlib.h>

void main(){

    float num, soma=0, media=0;
    int i;
    //Inicio do laço for

    for (i=1 ; i<=10 ; i++){
        //A partir deste ponto são as instruções que devem ser executadas nas interações
        printf("Informe o numero:");
        scanf("%f", &num);
        soma += num;
    }
    //A média deve ser calculada após a interação
    media = soma / 10;
    printf("A média é: %f", media);
}