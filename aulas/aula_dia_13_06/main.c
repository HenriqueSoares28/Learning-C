#include "data.h"

int main(){
    DATA d1;
    d1.dia = 13;
    d1.mes = 6;
    d1.ano = 2022;
    printf("%s\n", mesExtenso(d1));
}