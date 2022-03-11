#include <stdio.h> // biblioteca standard de Input/Output
int main()
{
    char car;                                   // declara var. car do tipo char
    printf("Digite um caractere e ENTER\n");    // mostra na tela
    scanf("%c", &car);                          // %c para ler ou mostrar chae 1 char
    printf("Caractere digitado é %c\n", car);
    return 0;
    // Mostrou na tela valor de car lido
}   // fim main