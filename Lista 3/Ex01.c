#include <stdio.h>
#include <stdlib.h>

int main()
{
    float lado1,
          lado2,
          lado3;
    
    printf("Escreva o lado 1 do triangulo: ");
    scanf("%f", &lado1);
    printf("Escreva o lado 2 do triangulo: ");
    scanf("%f", &lado2);
    printf("Escreva o lado 3 do triangulo: ");
    scanf("%f", &lado3);
    
    if(lado1 == lado2 && lado2 == lado3){
        printf("Esse triangulo é um triangulo equilátero.");
    }else if(lado1 == lado2 || lado2 == lado3 || lado1 == lado3) {
        printf("Esse triangulo é um triangulo isóceles.");
    }else {
        printf("Esse triangulo é um triangulo escaleno.");
    }
    
    return 0;
}