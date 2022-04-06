#include <stdio.h>
#include <stdlib.h>
#include <henriquelib.h>

int main(void){
    system("cls");
    int numeroTermos;

    printf("\nFibonacci");
    printf("\nEscreva o numero de termos : ");
    scanf("%i", &numeroTermos);
    fibonacci(numeroTermos);


    return 0;
}