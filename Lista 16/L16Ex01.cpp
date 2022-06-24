#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using std::cout;
using std::cin;
using std:: endl;

#include "data.h"


int menu();
#define  TAM 10

int main(){


    system("cls");

    int opc;
    Data cadastro[TAM];
    int i=0;
    do{
        opc = menu();
        switch(opc){
            case 1: 
                printf("\n\n%i pessoa: \n\n",i+1);
                leData(cadastro[i]);
                i++;
                break;
            case 2:
                puts("\nDigite o mes que deseja pesquisar");
                int mes;
                cin >> mes;
                pesquisarData(cadastro, i, true);
                break;
        }
    }while(opc != 3 && i<TAM);
    puts("Programa finalizado!");
    
}

int menu(){
    int num;
    puts("\n\n");
    puts("1 - Cadastrar Data\n");
    puts("2 - Pesquisar Data\n");
    puts("3 - Sair\n");
    puts("\n");
    puts("Digite a opcao desejada: ");
    cin >> num;
    return num;
}



