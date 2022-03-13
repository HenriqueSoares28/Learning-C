#include <stdio.h>
#include <stdlib.h>

int main() {
  char validacao;
  
  while(validacao != 'n') {
    int ano;
    printf("Digite um ano para saber se ele é bissexto: ");
    scanf(" %i", &ano);
    
    if(ano % 4 == 0 && ano % 100 != 0 || ano % 400 ==0) {
      printf("O ano %i é bissexto.", ano);
    }else {
      printf("O ano %i não é bissexto.\n", ano);
    }
    
    printf("\nQuer testar outro número? [s/n]");
    scanf(" %c", &validacao);
    }
  printf("Programa finalizado.");
  return 0;
}