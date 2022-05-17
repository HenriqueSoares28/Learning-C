
#define TAM_MAX 5

int main(){
    system("cls");
    float vetor[TAM_MAX] = {1,2,3,4,5};
    trocarValores(vetor, 2, 3);
    for(int i=0; i < TAM_MAX; i++){
        printf("%f, ",vetor[i]);
    }
}

void trocarValores(float vetor[], int pos1, int pos2){
    float aux;
    aux = vetor[pos2];
    vetor[pos2] = vetor[pos1];
    vetor[pos1] = aux;
}