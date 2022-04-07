#include <stdio.h>
#include <henriquelib.h>

int main(){
    system("cls");

    int razao = 0,
        primeiroTermo = 0,
        numeroTermos = 0;
    bool erro;
    do
    {
        printf("\nInsira o termo inicial da PA: ");
        scanf("%i", &primeiroTermo);
        printf("\nInsira a razao da PA: ");
        scanf("%i", &razao);
        do
        {
            printf("\nInsira a quantidade de termos da PA: ");
            scanf("%i", &numeroTermos);
            if (numeroTermos > 0){
                erro = false;
            }else
            {
                printf("\nNumero invalido. Digite novamente.\n");
                erro = true;
            }
            
        } while (erro);
        erro = true;
        
        

        termosPA(razao, primeiroTermo, numeroTermos);

        erro = continuar();
    } while (erro);
    printf("\nPrograma finalizado!");

    return 0; 
}