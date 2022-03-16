/*Programa para calcular a situação do aluno
neste programa teremos as seguintes saídas:
    Aprovado, quando a nota maior ou igual a 7
    Reprovado, quando a nota menor ou igual a 4
    Recuperação, quando a nota entre maior que 4
    ou menor que 7*/
#include <stdio.h>

#define MEDAPROV 7.0
#define MEDREPROV 4.0

int main(){
    float na;

    printf("Digite a nota do aluno e tecle ENTER\n");
    scanf("%f", &na);

    if(na >= MEDAPROV){
        printf("O aluno está aprovado\n");
    }
    else if(na<= MEDREPROV){
        printf("O aluno está reprovado\n");
    }
    else{
        printf("O aluno está de recuperação\n");
    }
    return 0;
}