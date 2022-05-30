#include <stdbool.h>


#define LIN 3
#define COL 3

bool chaveMatriz(float matriz[][COL], float chave);

int main(){
    system("cls");
    float matriz[LIN][COL] = {{1,2,9},{3,4,9},{5,6,9}};
    if(chaveMatriz(matriz, 4)) printf("\nA chave esta presente na matriz");
    else printf("\nA chave nao esta presente na matriz");
}

bool chaveMatriz(float matriz[][COL], float chave){
    bool chavebool = false;
    int i=0, j=0;
    while(!chavebool && i < LIN){
        if (matriz[i][j] == chave) chavebool = true;
        j++;
        if (j == i){
            i++;
            j=0;
        }
        
    }
    return chavebool;
}