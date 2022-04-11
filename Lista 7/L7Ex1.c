#include <stdio.h>
#include <stdbool.h>

int main(){
    system("cls");
    int num;
    bool erro;
    do
    {
        printf("\nEscreva um numero: ");
        scanf("%i",&num);
        if (num < 2)
        {
            printf("Valor invalido");
            erro = true;
        }else(erro = false);
        
    } while (erro);
    bool primo = true;
    int restoDivisao;
    for (int i = 1; i < num/2; i++)
    {
        restoDivisao = num%2;
        if (restoDivisao == 0){
            primo = false;
            
        }
        
    }
    if(primo){
            printf("O numero e primo");
    }else{printf("O numero nao e primo");}
    
    
}