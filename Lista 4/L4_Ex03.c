#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include <locale.h>
#include <henriquelib.h>
#include <Windows.h>

int main(){
    bool continuarBool,
         condicaoExistencia;
    int inicio,
        final;
    do
    {   
        do
        {
            
            system("cls");
            printf("Escreva o numero inicial: ");
            scanf("%i",&inicio);
            printf("Escreva o numero final: ");
            scanf("%i",&final);
            if(inicio < final){
                condicaoExistencia = false;
            }else{
                printf("Numeros invaldos, digite novamente;.");
                Sleep(1500);
                condicaoExistencia = true;
            }
        } while (condicaoExistencia);
        

        do
        {
            printf("\n%i", inicio);
            inicio ++;
        } while (inicio <= final);

        continuarBool = continuar();
    } while (continuarBool);
    printf("Programa finalizado.");
    
    return 0;
}