

#define TAM_MAX 5

void inverterReaisIt(float arranjo[]);

int main(){
    system("cls");
    float vetor1[] = {1,2,3,4,5};
    printVetor(vetor1);
    inverterReaisIt(vetor1);
    printf("\n\n");
    printVetor(vetor1);

}

void inverterReaisIt(float arranjo[]){
    float aux;
    for(int i=0; i < TAM_MAX; i++){
        aux = arranjo[TAM_MAX-1-i];
        arranjo[TAM_MAX-1-i] = arranjo[i];
        arranjo[i] = aux;
        
    }
}

void printVetor(float vetor[]){
    for (int i=0; i < TAM_MAX; i++){
        printf("%.1f, ",vetor[i]);
    }
}