void inveterVetor(float vetor1[], float vetor2[], int tamanho);

int main(){
    system("cls");
    float vetor1[] = {4,1,2,3,12,5,6,7};
    int tamanho = sizeof(vetor1)/sizeof(vetor1[0]);
    float vetor2[tamanho];
    inveterVetor(vetor1, vetor2, tamanho);
    for(int i=0; i<tamanho; i++){
        printf("%.0f, ",vetor2[i]);
    }
}

void inveterVetor(float vetor1[],float vetor2[], int tamanho){
    
    for(int i=0, c=tamanho; i < tamanho; i++, c--){
        vetor2[c] = vetor1[i];
    }
}