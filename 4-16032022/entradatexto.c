/*Programa pede ao usuário quem digite o seu nome.
 Ao fazer será alocado na variável nome*/
 #include <stdio.h>

int main(){

    char nome[30];

    printf("Digite o seu nome e tecle ENTER\n");
    scanf("%s",nome);
    // scanf com )"s%", nome) nome é a variável e o %s serve para colocar mais de 1 caractere

    printf("%s\n",nome);

    return 0;
}