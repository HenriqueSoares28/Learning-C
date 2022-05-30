#define LIN 3
#define COL 3

void printMatriz(int matriz1[][COL]);
void copiarMatriz(int matriz1[][COL], int matriz2[][COL]);

int main() {
    system("cls");
    int matriz1[LIN][COL] = {{1,2,3}, {4,5,6}, {7,8,9}};
    int matriz2[LIN][COL];
    printMatriz(matriz1);
    copiarMatriz(matriz1,matriz2);
    printMatriz(matriz2);
    
}

void printMatriz(int matriz1[][COL]) {
    for (int i = 0; i < LIN; i++){
        for (int j = 0; j < COL; j++){
            printf("\t%d ", matriz1[i][j]);
        }
        printf("\n");
    }
}

void copiarMatriz(int matriz1[][COL], int matriz2[][COL]) {
    for(int i=0; i < LIN; i++){
        for(int j=0; j < COL; j++){
            matriz2[i][j] = matriz1[i][j];
        }
    }
}