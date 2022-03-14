#include <stdio.h>
int main()
{
    float x, g, soma, subtrair, dividir, multiplicar;        // usei float para numero quebrado

    printf("Digite o primeiro valor do calculo, e ENTER\n"); // aparece na tela o valor a ser digitado
    scanf("%f", &x); // o primeiro numero que o usuário ira digitar
    printf("Digite o segundo valor do calculo, e ENTER\n");  //aparece na tela o valor a ser digitado
    scanf("%f", &g); // o segundo numero que o usuário ira digitar
    soma = g + x; // a operação que irá fazer o resultado
    subtrair = g - x; // a operação que irá fazer o resultado
    dividir = g / x; // a operação que irá fazer o resultado
    multiplicar = g * x; // a operação que irá fazer o resultado
    printf("O resultado do valor é %f\n", soma); // mostra resultado da soma
    printf("O resultado do valor é %f\n", subtrair); // mostra o resultado da suibtração
    printf("O resultado do valor é %f\n", dividir); // mostra o resultado da divisão
    printf("O resultado do valor é %f\n", multiplicar); // mostra o resultado da multiplicação
    return 0;
}// fim main