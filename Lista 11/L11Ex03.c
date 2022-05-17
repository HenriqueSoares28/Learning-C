#define TAM_MAX 5
float somaVetor(float vetor[]);

int main(){
    system("cls");
    float vetor[TAM_MAX] = {1, 2, 3, 4, 5};
    printf("\nSoma dos valores do vetor: %.1f", somaVetor(vetor));
}

float somaVetor(float vetor[]){
    float soma=0;
    for(int i=0; i < TAM_MAX; i++){
        soma+=vetor[i];
    }
    return soma;
}