#define LIN 2
#define COL 2

int main(){
    system("cls");
    float matriz1[LIN][COL] = {{1,2}, {3,4}};
    printf("\nO index do maior valor da 1 linha e %i", indexMaiorNum(matriz1));
}

int indexMaiorNum(float matriz1[][COL]){
    int maior = 0;
    for (int i=0; i < COL; i++){
        if (matriz1[i] > matriz1[maior]) maior = i;
    }return maior;
}