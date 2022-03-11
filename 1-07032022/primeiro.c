#include <stdio.h> //Biblioteca standard de Input/Output
int main()
{
    int j;                                       // declarar var . J inteira
    printf("Digite um valor inteiro e ENTER\n"); // mostrar na tela
    scanf("%d", &j);                             // ler J, NÃO digitar NADA entre %d e "
    printf("Valor de j e ' %d\n", j);            // mostra na tela o valor de J lido
    return 0;
} // FIM