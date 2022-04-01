/*
Programa  para trabalhar com funções, vamos usar funções
com retorno, sem retorno, com argumentos(parâmetros), sem argumentos
*/
#include <stdio.h>
#include <stdlib.h>

void separadorHT(){

    printf("\n");
    for(int i = 0 ; i <= 50 ; i++){
        printf("#");

    }
    printf("\n");
}
void separadorLinha(){
    printf("\n");
    for(int i = 0 ; i <= 50 ; i++){
        printf("#");

    }
    printf("\n");
}
void pularLinha(int qtdVezes){
    for(int i = 1 ; i <= qtdVezes ; i++){
        printf("\n");

    }
}

char* comparar(int v1, int v2){
    if(v1 > v2){
        return "O primeiro número é maior que o segundo";
    }
    else if(v1 < v2){
        return "O segundo número é maior que o primeiro";
    }
    else{
        return "Os números são iguais";
    }
}

void main(){

    int n1, n2;
    system("clear"); //Limpar a tela do terminal

    //chamando a função separador HT
    separadorHT();
    pularLinha(5);

    printf("\t\tPrograma que exibe uma mensagem");
    pularLinha(10);

    //chamando a função separadorLinha
    separadorLinha();
    pularLinha(2);

    printf("Digite um número: \n");
    scanf("%d", &n1);
    printf("Digite outro número: \n");
    scanf("%d", &n2);

    pularLinha(1);
    printf(comparar(n1, n2));
    pularLinha(2);
}