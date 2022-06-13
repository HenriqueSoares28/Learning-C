#include <stdio.h>


int main(){
    FILE* arq = "arquivo.dat";
    FILE* arq2 = "novo.dat";
    abrirArq(arq);
    escreverArq(arq);
    retirarNegativo(arq, arq2);

    
}

void abrirArq(FILE* arq){
    arq = fopen("arquivo.dat", "w");
    fclose(arq);
}

void retirarNegativo(FILE* arq, FILE* arq2){
    arq = fopen("arquivo.dat", "r");
    arq2 = fopen("novo.dat", "w");
    int num;
    fscanf(arq,"%i", &num);
    if (num >= 0){
        fprintf(arq2,"%i", num);
    }
    fclose(arq2);
}

void escreverArq(FILE* arq){
    arq = fopen("arquivo.dat", "w");
    for (int i = -50; i < 50; i++){
        fscanf(arq,"%i", &i);
    }
}