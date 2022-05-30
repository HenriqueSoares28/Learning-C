#include <stdbool.h>

#define LIN 2
#define COL 2

bool priLinIgualDiagPrincipal(float matriz1[][COL]);

int main(){
    system("cls");
    float matriz1[LIN][COL] = {{1,3},{1,3}};
    if(priLinIgualDiagPrincipal(matriz1)) printf("\nA linha 1 e igual a diagonal principal");
    else printf("\nA linha 1 nao e igual a diagonal principal");
}

bool priLinIgualDiagPrincipal(float matriz1[][COL]){
    bool linIgDiag = true;
    int i=0;
    if (LIN == COL){
        while(linIgDiag && i < COL){
            linIgDiag = matriz1[0][i] == matriz1[i][i];
            i++;
        }
    }
    return linIgDiag;
}