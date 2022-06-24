#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "data.h"


typedef struct{
    char *nome;
    DATA d;
}PESSOA;

void cadastrarPessoa(PESSOA p){
    fflush(stdin);
    printf("Digite o nome: ");
    gets(p.nome);
    printf("Digite a data de nascimento: \n\n");
    cadastrarData(p.d);
}