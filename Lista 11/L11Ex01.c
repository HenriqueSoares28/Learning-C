#define TAM_MAX 5

void trocarPrimeiroUltimo(float vetor[]);

int main(){
    system("cls");
    float vetor[TAM_MAX] = {1,2,3,4,8};
    for(int i=0; i<TAM_MAX; i++){
        printf("%f, ",vetor[i]);
    }
    trocarPrimeiroUltimo(vetor);

    printf("\n\n\n");

    for(int i=0; i<TAM_MAX; i++){
        printf("%f, ",vetor[i]);
    }

}

void trocarPrimeiroUltimo(float vetor[]){
    float aux;
    aux = vetor[0];
    vetor[0] = vetor[TAM_MAX -1];
    vetor[TAM_MAX -1] = aux;
}