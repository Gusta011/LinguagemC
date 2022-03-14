#include <stdio.h>
int main()

{
    float preco, taxa, desconto, resultado;

    printf("Digite um preço para o produto: ");
    scanf("%f", &preco);

    printf("Digite a taxa de desconto: ");
    scanf("%f", &taxa);
    /* O vendedor ira entrar com o valor de taxa e em seguida nosso programa divide por 100 para obter o valor em percentuual. sendo assim, quando o vendedor digitar 5, o programa vai calcular e teremos o resultado 0,05 que representa 5%*/

    taxa = taxa / 100;

    desconto = preco * taxa;

    resultado = preco - desconto;

    printf("O valor do desconto é %f e o valor é %f", desconto, resultado);
    return 0;
} // fim da main