#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "pessoa.h"

#define TAM 10

int menu();

int main(){
    system("cls");

    int opc;
    PESSOA cadastro[TAM];
    int i=0;
    do{
        opc = menu();
        switch(opc){
            case 1: 
                printf("\n\n%i pessoa: \n\n",i+1);
                cadastrarPessoa(cadastro[i]);
                i++;
                break;
            case 2:
                //searcherDay(DATA d);
                break;
        }
    }while(opc != 3 && i<TAM);
    puts("Programa finalizado!");
    
}

int menu(){
    int num;
    printf("\n\n");
    printf("1 - Cadastrar Pessoa\n");
    printf("2 - Pesquisar aniversario\n");
    printf("3 - Sair\n");
    printf("\n");
    printf("Digite a opcao desejada: ");
    scanf("%i", &num);
    return num;
}