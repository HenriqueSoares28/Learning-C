//Exercício 5
/*
Calcular o seu peso ideal, sabendo que:
    Peso Ideal de pessoas de gênero masculino: (72,7 x altura) – 58
    Peso Ideal de pessoas de gênero feminino: (62,1 x altura) – 44,7
*/

#include <stdio.h> // entrada e saida
#include <stdlib.h> // return

int main()
{
    system("cls");
    int sexo;
    float altura;
    float pesoid;
    printf("Digite 1 para masculino e 2 para feminino: ");
    scanf("%d", &sexo);
    printf("Digite a altura em M: ");
    scanf("%f", &altura);
    if (sexo == 1) {
        pesoid = (72.7*altura)-58;
        printf("Seu peso ideal é: %f", pesoid);
    }
    else if (sexo == 2) {
        pesoid = (62.1*altura) -44.7;
        printf("Seu peso ideal é: %f", pesoid);
    }else{

        printf("Número de sexo errado. Reinicie o programa.");
    }
    
    return 0;
        
}