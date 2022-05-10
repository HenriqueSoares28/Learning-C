float perimetroQuadrado(float lado);

int main(){
    system("cls");
    float lado;
    printf("\nEscreva o lado do quadrado: ");
    scanf("%f", &lado);
    printf("\nO perimetro do quadrado: %.1f", perimetroQuadrado(lado));
}

float perimetroQuadrado(float lado){
    return lado*4;
}


