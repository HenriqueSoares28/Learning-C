#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

#include  <henriquelib.h>  

//#include  <C:\Users\n\OneDrive\Puc\AEDS 1\C\Lista 4\lib.h> //notebook
//#include  <C:\Users\eldut\OneDrive\Puc\AEDS 1\C\Lista 4\lib.h>  //pc
//#include <locale.h> não ta funcionando 



int main(){
    system("cls");
    //setlocale(LC_ALL, "Portuguese-brazilian");

    printf("\n\tCalculo do Peso Ideal\n");

    bool error;
    float altura;
   
    do{
        printf("\nAltura: ");
        scanf("%f",&altura);
        if (altura < 0) {

            error = true;
            printf("Erro, digite novamente. ");
        }else {
            error = false;
        }
    }while(error);

    error = true;
    char genero;

    do{
        printf("\nGenero [M/F]: ");
        scanf(" %c", &genero);
        genero = toupper(genero);
        if (genero == 'M' || genero == 'F') {
            error = false;
        }else{
            error = true;
            printf("Genero invalido. Digite novamente: ");
        }
    }while(error);
    
    float pesoId = pesoIdeal(altura, genero);
    printf("Seu peso ideal e: %.2f", pesoId);

  
    return 0;
}