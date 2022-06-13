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
    int cont = 0;
    if(LIN==COL) {
        maior = matriz1[0][1];
        while(cont < LIN){//substituir o for por while para otimizar a solução
            for(int j=0; j<COL; j++){
                if(j > cont && matriz1[cont][j]>maior){
                    maior = matriz1[cont][j];
                }
            }  
            cont++;
        }
    }else maior = 0; 
    return maior;
}