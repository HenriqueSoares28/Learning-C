#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define TAM_MAX 100

float mediaVetor(int vetor[], int c);
float porcentagemAcimaMedia(int vetor[], int media, int tam);

int main(){
    system("cls");
    int idades[TAM_MAX];
    bool flag = true, erro = true;
    int c =0 ;
    while(flag){
        while(erro){
            printf("\nDigite sua idade [0 para]? ");
            scanf("%d",&idades[c]);
            if(!(idades[c] >= 0 && idades[c] <=150)){
                printf("\nErro, digite novamente. ");
                erro =true;
            }else erro = false;
        }
        if (idades[c] > 0) {
            erro = true;
            flag = true;
            c++;
        }else if (idades[c] == 0) flag = false; 
    }
    float media = mediaVetor(idades, c);
    printf("\nA media das idades = %.1f", media);
    printf("\nA porcentagem de alunos acima da media e: %.1f%%", porcentagemAcimaMedia(idades, media, c));
    
}

float mediaVetor(int vetor[], int c){
    int count = 0, soma = 0;
    while(vetor[count] != NULL){
        soma += vetor[count];
        count++;
    }return ((float)soma/(float)c);
}

float porcentagemAcimaMedia( int vetor[], int media, int tam){
    int acimaMedia = 0;
    float porcentagemAcimaMedia;
    for(int i=0; i < tam; i++){
        if (vetor[i] >= media) acimaMedia++; 
    }
    porcentagemAcimaMedia = (float)acimaMedia/(float)tam*100;
    return porcentagemAcimaMedia;
}

