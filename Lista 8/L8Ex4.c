float calcularMaiorReal(float x, float y);

int main(){
    system("cls");
    float x,
          y;
    printf("Digite 2 valores: ");
    scanf("%f %f", &x, &y);
    printf("\nO maior valor e: %.0f", calcularMaiorReal(x, y));
}

float calcularMaiorReal(float x, float y){
    float maior = x;
    if (y > x) maior = y;
    return maior;
}