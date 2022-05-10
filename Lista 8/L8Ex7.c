float pesoIdeal(float altura, char sexo);

int main(){
    system("cls");
    float altura;
    char genero;
    printf("\nAltura: ");
    scanf("%f",&altura);
    printf("\nSexo [m/f]: ");
    scanf(" %c", &genero);
    printf("\nSeu peso ideal e: %.1f", pesoIdeal(altura, genero));
}

float pesoIdeal(float altura, char sexo){
    float pesoId;
    sexo = toupper(sexo);
    if (sexo == 'M'){
    pesoId = 72.7 * altura -58;
    }else {
        pesoId = 62.1 * altura - 44.7;
    }
    return pesoId;
}