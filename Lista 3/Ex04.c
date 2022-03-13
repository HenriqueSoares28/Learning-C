#include <stdio.h>
#include <stdlib.h>

int main() {
  float num1,
        num2,
        operacao;
  
  while(1){
    printf("\nDigite o primeiro número: ");
    scanf(" %f", &num1);
    printf("Digite o segundo número: ");
    scanf(" %f", &num2);
    printf("\t Digite 1 para somar\n\t Digite 2 para subtrair\n\t Digite 3 para multiplicar\n\t Digite 4 para dividir\n");
    while(1) {
      int menu = 0;
      scanf("%i", &menu);
      if(menu == 1){
        operacao = num1 + num2;
        printf("%f + %f = %f\n", num1, num2, operacao);
        break;
      }else if(menu == 2){
        operacao = num1 - num2;
        printf("%f - %f = %f\n", num1, num2, operacao);
        break;
      }else if(menu == 3){
        operacao = num1 * num2;
        printf("%f x %f = %f\n", num1, num2, operacao);
        break;
      }else if(menu == 4){
        operacao = num1 / num2;
        printf("%f / %f = %f\n", num1, num2, operacao);
        break;
      }else{
        printf("Número inválido. Digite novamente!\n");
      }
    }
    int finalizar;
    while(1){
      printf("Quer continuar? [s/n]:");
      char continuar;
      scanf(" %c", &continuar);
      if(continuar == 's' || continuar == 'S') {
        finalizar = 0;
        break;
      }else if(continuar == 'n' || continuar == 'N') {
        finalizar = 1;
        break;
      }else{
        printf("Letra inexperada. Digite novamente:\n");
      }
    }
    if(finalizar == 1) {
      printf("Programa finalizado.");
      break;
    }
  }
  
  return 0;
}