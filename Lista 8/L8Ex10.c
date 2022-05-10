#include <stdbool.h>
float acharMaior(float num, float maior);

int main(){
    system("cls");
    float num,
          maior =0;
    bool flag = true;
    printf("\nEscreva um numero [0 para]: ");
    scanf("%d",&num);
    maior = num;
    while(flag){
        printf("\nEscreva um numero [0 para]: ");
        scanf("%d",&num);
        if (num == 0) flag = false;
        maior = acharMaior(num,maior);
    }
    printf("\nO maior numero digitado foi: %.1f\n",maior);
}

float acharMaior(float num, float maior){
    float maiorNum = 0;
    if (num > maior) maiorNum = num;
    else maiorNum = maior;
    return maiorNum;
}