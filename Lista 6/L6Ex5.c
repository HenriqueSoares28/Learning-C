#include <stdio.h>
#include <stdlib.h>
#include <henriquelib.h>


int main(void) {
    system("cls");
    float base,
          resultado;
    int expoente;
    bool erro;

    printf("\nEscreva a base: ");
    scanf("%f", &base);

    do
    {

        printf("\nEscreva o expoente: ");
        scanf("%i", &expoente);
        if(expoente >= 0){
            erro = false;
        }else{
            printf("\nExpoente invalido");
            erro = true;
        }
    } while (erro);
    resultado = exponencial(base, expoente);
    printf("\nResultado: %.0f\n", resultado);
}
    