

#include <stdio.h>

int main(){
    
    char cargo[10];

    printf("Digite o cargo que vocẽ deseja ver o salário e tecle ENTER\n");
    scanf("%s", cargo);

    if(strcmp(cargo, "diretor")==0){
        printf("O salário do diretor é: 15,000,00\n");
    }
    else if(strcmp(cargo, "gerente")==0){
        printf("O salário do gerente é: 12,000,00\n");
    }
    else if(strcmp(cargo,  "analista")==0){
        printf("O salário do analista é: 8000,00\n");
    }
    else if(strcmp(cargo, "assistente")==0){
        printf("O salário do assistente é: 4000,00\n");
    }
    else if(strcmp(cargo, "auxiliar")==0){
        printf("O salário do auxiliar é: 2000,00\n");
    }
    else{
        printf("Não tem salário\n");
    }
    return 0;
}