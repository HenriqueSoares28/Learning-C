#include <C:\Users\eldut\OneDrive\Puc\AEDS 1\C\henriquelib.h>
int main(){
    system("cls");
    
    int razao, primeiroTermo, numeroTermos;
    
    printf("\nDigite a razao: ");
    scanf("%i",&razao);
    printf("\nDigite o primeiro termo: ");
    scanf("%i",&primeiroTermo);
    printf("\nDigite o numero de termos: ");
    scanf("%i",&numeroTermos);
    termosPG(razao, primeiroTermo, numeroTermos);
    
}