/*Programa para calcular o desconto de um funcionário. Onde o salário
sendo maior que 5000, terá um desconto de 5%. 
Caso contrário não haverá desconto*/
#include <stdio.h>

#define LIMITE 5000.00

int main(){
    float salarioFuncionario;

    printf("Digite o salário do funcionário e tecle ENTER\n");
    scanf("%f", &salarioFuncionario);

    if(salarioFuncionario > LIMITE){
        printf("O desconto será de %.2f\n", salarioFuncionario*0.05);
        // No lugar do 0.05 pode ser 5 / 100
        printf("O valor final é %.2f\n", salarioFuncionario - (salarioFuncionario * 0.05));
    }
    else{
        printf("Não tem desconto o buteco");
    }
    return 0;
}// fim da main