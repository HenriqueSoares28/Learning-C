#define LIN 2
#define COL 2

int maiorMediaMatriz(float matriz1[][COL]);

int main(){
    system("cls");
    float matriz1[LIN][COL] = {{1,2}, {3,4}};
    printf("\nA quantidade de numeros acima da media da matriz e %i", maiorMediaMatriz(matriz1));
}

float mediaMatriz(float matriz1[][COL]){
    float soma=0;
    for(int i=0; i<LIN; i++){
        for(int j=0; j<COL; j++){
            soma+=matriz1[i][j];
        }
    }
    return (soma/(LIN*COL));
}

int maiorMediaMatriz(float matriz1[][COL]){
    int maiorMedia=0;
    float media = mediaMatriz(matriz1);
    for(int i= 0; i < LIN; i++){
        for(int j=0; j<COL; j++){
            if(matriz1[i][j] > media) maiorMedia++;
        }
    }return maiorMedia;
}