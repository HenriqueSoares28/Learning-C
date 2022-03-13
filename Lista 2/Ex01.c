// Calcular e escrever o perímetro de um quadrado, sendo o lado um valor lido.

#include <stdio.h>
#include <stdlib.h>

int main() {
  float perimetro;
  float lado;

  printf("Digite o lado do quadrado: ");
  scanf("%f", &lado);

  perimetro = lado * 4;
  
  printf("O perimetro do quadrado de lado %f é %f\n", lado, perimetro);
  
}