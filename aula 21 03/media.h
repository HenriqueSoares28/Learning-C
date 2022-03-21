#include <stdio.h>
#include <stdlib.h>


void media(float media){
    printf("Digite os valores das notas, digite -1 para sair.");
    int num = 0,
        contador =0;
    float soma =0,
          media2 = media;
    do
    {

        printf("\nDigite o numero: ");
        if (num >= 0)
        {
            scanf("%f", &num);
            soma += num;
            contador += 1;
        }
        
    } while (num != -1);
    media = soma / contador;

}