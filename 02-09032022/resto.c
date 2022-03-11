#include <stdio.h>
int main()
{
    int n1, n2, divisao, resto; // int para número inteiro, float para número quebrado

    printf("digite um numero para a divisão, e ENTER\n"); // msg na tela para o cliente escrever
    scanf("%d", &n1); // digitar o numero para a divisão

    printf("digite um valor para completar a divisão, e ENTER\n");
    scanf("%d", &n2); // digitar um número para a divisão

    divisao = n1 / n2; // cálculo da divisão com o resultado
    resto = n1 % n2; // cálculo da divisão com o resto do calculo

    printf("o resultado da divisão é %d\n", divisao); // msg para resultado da divisão
    printf("o resto da divisão é %d\n", resto); // msg para o resto da divisão
    return 0;
}// fim da main