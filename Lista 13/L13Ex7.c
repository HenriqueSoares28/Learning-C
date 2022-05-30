#define LIN 2
#define COL 2

float somaDiagonalPricipal(float matriz1[][COL]);

int main(){
    system("cls");
    float matriz1[LIN][COL] = {{1,2}, {3,4}};
    printf("\nA soma da diagonal principal e: %.1f\n", somaDiagonalPricipal(matriz1));
}

float somaDiagonalPricipal(float matriz1[][COL]){
    float somaDiagonal = 0; //Se a matriz nao for quadrada retorna 0;
    if (LIN == COL){
        for(int i = 0; i < LIN; i++) somaDiagonal += matriz1[i][i];
    }
    return somaDiagonal;
}