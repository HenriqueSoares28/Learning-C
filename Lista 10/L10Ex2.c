
float calcExponencial(float x, int y);
int main(){
    system("cls");
    float expoente = calcExponencial(2, 3);
    printf("\nO expoente e: %.1f\n", expoente);
}



float calcExponencial(float x, int y){
    // x^y
    float expoente;
    if(y<=0) expoente = 1;
    else{
        expoente = x*calcExponencial(x, y-1);
    }
    return expoente;
}