#include <stdio.h>
#include <henriquelib.h>

int main() {
    system("cls");
    int numero = 0,
        fatorialResposta;
    bool error;
    do
    {
        printf("\nEscreva um numero para calcular fatorial: ");
        scanf("%i", &numero);
        if (numero>= 0){
            error = false;
        }else{
            printf("\nNumero invalido.");
        }
    } while (error);
    fatorialResposta = fatorial(numero);
    printf("\nO fatorial de %i e = %i\n", numero, fatorialResposta);

    return 0; 
}