#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include <locale.h>
//#include  <C:\Users\n\OneDrive\Puc\AEDS 1\C\Lista 4\lib.h>    //notebook
#include  <C:\Users\eldut\OneDrive\Puc\AEDS 1\C\Lista 4\lib.h>  //pc


int main()
{

    int ano;
    bool error;
    bool bissexto;
    char continuar;
    do{
        system("cls");  
        printf("\n\tDigite um ano para saber se ele e bissexto:\n ");
        scanf("%i", &ano);
        bissexto = anoBissexto(ano);
        if (bissexto){
            printf("O ano %i e bissexto\n", ano);
        }else{
            printf("O ano %i nao e bissexto\n", ano);
        }
        bool boolContinuar = true;
        do{
            printf("\nQuer continuar [s/n]: ");
            scanf(" %c", &continuar);
            continuar = toupper(continuar);
            if (continuar == 'S'){
                boolContinuar = false;
                error = true;
            }else if(continuar == 'N'){
                printf("Programa finalizado.");
                boolContinuar = false;
                error = false;
            }else{
                printf("Letra nao reconhecida. Digite novamente:");
                boolContinuar = true;
            }
        } while (boolContinuar);
        

    } while (error);
    
    
    return 0;
}
