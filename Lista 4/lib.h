#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include <locale.h>




//Encontrar peso ideal:

float pesoIdeal(float altura, char sexo){
    float pesoId;
    sexo = toupper(sexo);
    if (sexo == 'M'){
    pesoId = 72.7 * altura -58;
    }else {
        pesoId = 62.1 * altura - 44.7;
    }
    return pesoId;
}

//Encontrar ano bissexto

bool anoBissexto(int ano){
    if((ano % 4 == 0) && (ano % 100 != 0) || (ano % 400 == 0)){
        return true;
    }else{
        return false;
    }
}