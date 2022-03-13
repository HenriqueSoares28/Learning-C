#include <stdio.h>
#include <stdlib.h>

int main() {
    float idade;
    float dias;
    printf("Quantos anos voçe tem? \n");
    scanf("%f", &idade);
    dias = idade *365.25;
    printf("Uma pessoa com %f anos viveu %f dias", idade, dias);
  
}