#include <string.h>
#include <henriquelib.h>
int main(){
    bool erro;
    do
    {
        system("cls");
        maiorMenor();
        erro = continuar();
    } while (erro);
    printf("\nPrograma finalizado.");
    return 0;
}