#include <stdio.h>
#include <stdlib.h>
#include "unidade.h"
#include "cursos.h"

void gravar(){

    FILE *arquivo;

    arquivo = fopen("dados.txt", "w");

    if(arquivo == NULL){
    printf("Arquivo não encontrado ou inexistente");
    exit(1);
    }

    cursos cur, *pcur;
    unidade uni, *puni;

    pcur = &cur;
    puni = &uni;

    printf("Coloque o nome do curso:\n");
    fgets(pcur->nomecurso, 100, stdin);

    printf("Coloque a descrição do curso:\n");
    fgets(pcur->descricao, 1000,stdin);

    printf("Coloque a carga horária:\n");
    fgets(pcur->cargahoraria, 50, stdin);

    printf("Coloque a data início do curso:\n");
    fgets(pcur->datainicio, 50, stdin);

    printf("Coloque a data término do curso:\n");
    fgets(pcur->datatermino, 50, stdin);

    printf("Coloque o preço do curso:\n");
    fgets(pcur->preco, 50, stdin);

    printf("Coloque o nome da unidade:\n");
    fgets(puni->nomeunidade, 100, stdin);

    printf("Coloque a localização da unidade:\n");
    fgets(puni->localizacao, 100, stdin);

    printf("Coloque o horário de funcionamento da unidade:\n");
    fgets(puni->horariofuncionamento, 100, stdin);
    
    printf("Coloque o telefone contato da unidade:\n");
    fgets(puni->telefonecontato, 50, stdin);

    fprintf(arquivo, pcur->nomecurso);
    fprintf(arquivo, pcur->descricao);
    fprintf(arquivo, pcur->cargahoraria);
    fprintf(arquivo, pcur->datainicio);
    fprintf(arquivo, pcur->datatermino);
    fprintf(arquivo, pcur->preco);
    fprintf(arquivo, puni->nomeunidade);
    fprintf(arquivo, puni->localizacao);
    fprintf(arquivo, puni->horariofuncionamento);
    fprintf(arquivo, puni->telefonecontato);

    fclose(arquivo);
}