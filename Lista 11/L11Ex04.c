#define TAM_MAX 5
float mediaVetor(float vetor[]);

int main(){
    system("cls");
    float vetor[TAM_MAX] = {1, 2, 3, 4, 5};
    printf("\nMedia dos valores do vetor: %.1f", mediaVetor(vetor));
}

float mediaVetor(float vetor[]){
    float media=0;
    for(int i=0; i < TAM_MAX; i++){
        media+=vetor[i];
    }
    media = media/TAM_MAX;
    return media;
}