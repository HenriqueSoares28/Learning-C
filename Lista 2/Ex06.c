#include <stdio.h>
#include <stdlib.h>

int main() {
    float altura;
    float pesoid;
    printf("Digite sua altura: ");
    scanf("%f", &altura);
    pesoid = 72,7 * altura - 58;
    printf("Uma pessoa de altura %f tem peso ideal de %f", altura, pesoid);
    
}