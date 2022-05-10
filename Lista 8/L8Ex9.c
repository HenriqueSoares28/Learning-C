float calcPotencia(float numero, float potencia);

int main(){
    system("cls");
    printf("\nPotencia: %.0f", calcPotencia(2,5));
}

float calcPotencia(float numero, float potencia){
    float pot;
    if (potencia <=1) pot = numero;
    else{
        pot = numero * calcPotencia(numero, potencia-1);
    }
    return pot;
}