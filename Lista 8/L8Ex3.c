#define PI 3.14

float areaCirculo(float raio);

int main(){
    system("cls");
    float raio;
    printf("\nDigite o raio do circulo: ");
    scanf("%f",&raio);
    printf("\nA area do circulo e: %.1f", areaCirculo(raio));
}

float areaCirculo(float raio){
    return (raio * raio * PI);
}
