#include <stdbool.h>

#define COL 2
#define LIN 2

bool matrizesIgual(float matriz1[][COL], float matriz2[][COL]);

int main(){
    system("cls");
    float matriz1[LIN][COL] = {{1,2},{3,4}};
    float matriz2[LIN][COL] = {{1,2},{3,4}};
    if(matrizesIgual(matriz1, matriz2)) printf("\nMatrizes iguais!");
    else printf("\nMatrizes diferentes!");
}

bool matrizesIgual(float matriz1[][COL], float matriz2[][COL]){
    bool igual = true;
    int i =0;
    while(igual && i < COL){
        for(int j=0; j < COL; j++){
            igual = matriz1[i][j] == matriz2[i][j];
        }
        i++;
    }
    return igual;
}