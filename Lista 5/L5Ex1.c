#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include <locale.h>
#include <henriquelib.h>
#include <Windows.h>

int main(){
    system("cls");

    int numeroalunos;
    bool validacao;
    do{

        printf("\nEscreva o numero de alunos: ");
        scanf("%i", &numeroalunos);
        if(numeroalunos > 0){
            validacao = false;
        }else{
            printf("\aNumero invalido");
            validacao = true;
        }
    }while(validacao);
    lerTime(numeroalunos);  

}