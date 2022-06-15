#include "cadastro.h"

int TAM = 3;

int main(){
    CADASTRO* p;
    p = (CADASTRO*)malloc(sizeof(CADASTRO));
    p->dataNas.dia = 3;
    printf("\nNome: ");
    gets(p->nome);

    CADASTRO p2[TAM];
    for(int i=0; i<TAM; i++){
        p2[i] = (CADASTRO*)malloc(sizeof(CADASTRO));
        lePessoa(*p2[i])
    }
}