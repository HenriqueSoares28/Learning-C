#define COL 3
#define LIN 3

int quantChaveMatriz(float matriz[][COL], float chave);

int main(){
    system("cls");
    float matriz[LIN][COL] = {{1,2,9},{3,4,9},{5,6,9}};
    printf("\nO numero 4 apareceu %i vezes", quantChaveMatriz(matriz, 4));
}

int quantCaveMatriz(float matriz[][COL], float chave){
    int count = 0;
    for(int i=0; i<LIN; i++){
        for(int j=0; j<COL; j++){
            if(matriz[i][j]==chave) count++;
        }
    }return count;
}