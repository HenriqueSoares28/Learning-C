#include <stdbool.h>
#define TAM_MAX 5


bool notasValidas(float vetor[]);

int main(){
    system("cls");
    float vetor[TAM_MAX] = {1, 2, 3, 4, 999};
    
    if(notasValidas(vetor)){
        printf("\nNotas validas");
    } 
    else{
        printf("\nNotas invalidas");
    } 

    
}

bool notasValidas(float vetor[]){
    bool notasValidas = true;
    int count = 0;
    while(notasValidas && count <= TAM_MAX){
        notasValidas = ((vetor[count] < 0) || (vetor[count] > 100)); 
        count++;
    }
    return notasValidas;
}