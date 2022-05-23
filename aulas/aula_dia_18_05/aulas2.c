void copiarVetor(float vetor1[], float vetor2[], int tamanho);

int main(){
    system("cls");
    float vetor1[] = {0,1,2,3,4,5,6,7};
    int tamanho = sizeof(vetor1)/sizeof(vetor1[0]);
    float vetor2[tamanho];
    copiarVetor(vetor1, vetor2, tamanho);
    for(int i=0; i<tamanho; i++){
        printf("%.0f, ",vetor2[i]);
    }
}

void copiarVetor(float vetor1[],float vetor2[], int tamanho){
    
    for(int i=0; i < tamanho; i++){
        vetor2[i] = vetor1[i];
    }
}