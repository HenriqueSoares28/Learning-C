#include <stdbool.h>

bool vetorTemZero(float vetor[], int tamanho);

int main(){
    system("cls");
    float  vetor[] = {1,2,3,4,5,6};
    int tamanho = sizeof(vetor)/sizeof(vetor[0]);
    if (vetorTemZero(vetor,tamanho)) printf("\nO vetor tem 0");
    else printf("\nO vetor nao tem 0"); 
}

bool vetorTemZero(float vetor[], int tamanho){
    bool temZero = false;
    int count = 0;
    while(!temZero && count < tamanho){
        temZero = vetor[count] == 0;
        count++;
    }   
    return temZero;
}
