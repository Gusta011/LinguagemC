/*Programa para calcular o resultado da situação
do aluno se está aprovado ou reprovado. Vamos levar em
consideração a nota do aluno e compara-la a média de aprovação da escola.
caso a nota do aluno seja maior ou igual 7, então o aluno
estará aprovado, caso contrário,
estará reprovado*/

/*incluir o cabeçalho de entrada e saída de dados padrão:
std(Standart -> Padrão) io (i->input | output)*/
#include <stdio.h>

//Definir uma constante. Sempre em letras maiúsculas
#define MEDIA 7.0

int main(){

    //declaração da variável notaAluno com o tipo float
    float notaAluno; 

    printf("Digite a nota do aluno e tecle ENTER\n");
    scanf("%f", &notaAluno);

    //desvio de fluxo com if .. else
    if(notaAluno >= MEDIA){
        printf("O sortudo está aprovado\n");
    }
    else{
    printf("O aluno estáreprovado\n");
    }
    return 0;
}// fim da main
