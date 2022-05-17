#define TAM_MAX 10

void vetorFibonnati(int vetor[]);
void printarVetor(int vetor[]);

int main(){
    system("cls");
    int vetor[TAM_MAX] = {0,1};
    vetorFibonnati(vetor);
    printarVetor(vetor);
}

void vetorFibonnati(int vetor[]){
    for(int i=0; i < TAM_MAX ; i++){
        vetor[i+2] = vetor[i+1] + vetor[i];
    }
}

void printarVetor(int vetor[]){
    for(int i=0; i < TAM_MAX; i++) printf("%d, ",vetor[i]);
}