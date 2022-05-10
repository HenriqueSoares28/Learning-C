#include <stdbool.h>
bool anoBissexto(int ano);
int main(){
    system("cls");
    int ano;
    printf("\nDigite o ano: ");
    scanf("%d",&ano);
    if (anoBissexto(ano)) printf("\nO ano e bissexto.");
    else printf("\nO ano nao e bissexto.");
}

bool anoBissexto(int ano){
    bool bissexto = false;
    if(ano % 4 == 0 && ano % 100 != 0 || ano % 400 ==0) bissexto = true;
    return bissexto;
}