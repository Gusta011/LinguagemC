/*Programa que exibe uma mensagem de boas vindas
ao nosso usuário*/
#include <stdio.h>

int main(){

    char texto[30] = "Olá! Seja Bem Vindo";
// char exemplo[] colocar numero para os caracteres

    printf("%s", texto);
// foi usado o "%s" pois a mensagem possui mais que 1 caractere, se fosse so 1 caractere seria "%c"

    return 0;
}// fim da main