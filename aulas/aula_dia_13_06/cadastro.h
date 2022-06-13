#include <stdio.h>
#include "data.h"
typedef struct{
    char* nome[50];
    DATA dataNas;
}CADASTRO;

void lePessoa(CADASTRO p){
    fflush(stdin);
    printf("Nome: ");
    gets(*p.nome);
    puts("\nData de nascimento: ");
    leData(p.dataNas);
}