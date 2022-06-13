#define LIN 3
#define COL 3

float maiorAcimaDiagPrin(float matriz1[][COL]);

int main(){
    system("cls");
    float matriz1[LIN][COL] = {{1,2,10},{4,5,6},{7,8,9}};
    printf("\n%.1f", maiorAcimaDiagPrin(matriz1));
}

float maiorAcimaDiagPrin(float matriz1[][COL]){
    float maior;
    if(LIN==COL) {
        maior = matriz1[0][1];
        for(int i=0; i< LIN; i++){//substituir o for por while para otimizar a solução
            for(int j=0; j<COL; j++){
                if(j > i && matriz1[i][j]>maior){
                    maior = matriz1[i][j];
                }
            }  
        }
    }else maior = 0; 
    return maior;
}