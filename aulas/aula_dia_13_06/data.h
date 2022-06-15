#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int dia;
    int mes;
    int ano;
}DATA;

bool dataValida(DATA d){
    bool valida = true;
    if(d.dia<1 || d.dia>31) valida = false;
    else if(d.mes > 12) valida = false;
    return valida;
}

char* mesExtenso(DATA d){
    char* meses[] = {"janeiro",
                    "fevereiro",
                    "marco",
                    "abril", 
                    "maio", 
                    "junho", 
                    "julho", 
                    "agosto", 
                    "setembro", 
                    "outubro", 
                    "novembro", 
                    "dezembro"};
    return meses[(d.mes-1)];

}

void leData(DATA d){
    printf("dd/mm/aaaa:\t");
    scanf("%i/%i/%i", &d.dia, &d.mes, d.ano);
}