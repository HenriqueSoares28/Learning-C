#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "data.h"


typedef struct{
    char *nome;
    DATA D;
}PESSOA;

void cadastrarPessoa(PESSOA p){
    printf("Digite o nome: ");
    gets(p.nome);
    printf("Digite a data de nascimento: ");
    cadastrarData(p.D);
}