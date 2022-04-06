#include <stdio.h>
#include <stdlib.h>
#include <henriquelib.h>

int main(void){
    system("cls");
    int razao,
        primeiroTermo,
        numeroTermos;

    printf("\nProgrecao Geometrica!");
    printf("\nEscreva o numero de termos da PG: ");
    scanf("%i", &numeroTermos);
    printf("\nEscreva o primeiro termo da PG: ");
    scanf("%i", &primeiroTermo);
    printf("\nEscreva a razao da PG:");
    scanf("%i", &razao);
    termosPG(razao, primeiroTermo, numeroTermos);

    return 0;
}