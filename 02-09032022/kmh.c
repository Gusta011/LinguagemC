#include <stdio.h>
int main()

{
    int distancia, tempo, resultado; //  numero inteiro = int numero quebrado= float

    printf("entre com a distancia percorrida: "); // msg para o cliente colocar um numero qualquer
    scanf("%d", &distancia); // para funcionar a função da "distancia"

    printf("entre com o tempo gasto: "); // msg para o cliente digitar o numero
    scanf("%d", &tempo); // para funcionar a função do "tempo"

    resultado = distancia / tempo; // operação para o resultado

    printf("\na velocidade média foi %dKMH\n", resultado); // resultado da velocidade média

    return 0;
} // fim da main