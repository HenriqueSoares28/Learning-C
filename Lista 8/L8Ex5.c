#include <stdbool.h>

bool ePar(int num);

int main(){
    system("cls");
    int num;
    printf("\nDigite um numero: ");
    scanf("%d",&num);
    if (ePar(num)) printf("\nO numero e par");
    else printf("\nO numero e impar");
}

bool ePar(int num){
    if (num % 2 == 0) return true;
    return false;
}