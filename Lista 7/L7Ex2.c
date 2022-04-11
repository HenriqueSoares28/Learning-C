#include <stdio.h>
#include <stdbool.h>

int main(){
    system("cls");
    int num, somaDivisores=0;
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
    bool divisores = true;
    int restoDivisao;
    for (int i = 1; i < num/2+1; i++)
    {
        restoDivisao = num%2;
        if (restoDivisao == 0){
            divisores = false;
            somaDivisores += i;
        }
        
    }
    if(divisores){
            printf("O numero e primo");
    }else{printf("O numero nao e primo");}
    if (somaDivisores == num)   
    {
        printf("\nO numero %i e um numero perfeito", num);
    }else(printf("\nO numero %i nao e um numero perfeito", num));
    
    
}