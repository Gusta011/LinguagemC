#include <stdio.h>
#include <stdlib.h>
void main(){
    
    int soma, num1, num2;
    system("clear");

    printf("Informe o primeiro número: ");
    scanf("%d", &num1);

    printf("Informe o segundo número: ");
    scanf("%d", &num2);

    soma = num1 + num2;

    printf("Resultado da soma: %d\n", soma);

    return 0;
}