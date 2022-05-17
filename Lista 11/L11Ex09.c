int negativosArranjo(float vetor[], int tamanho);

int main(){
    system("cls");
    float vetor[] = {0,-1,2,-3,4,-5};
    int tamanho = sizeof(vetor)/sizeof(vetor[0]);
    printf("\nO quantidade de numeros negativos no vetor e: %i", negativosArranjo(vetor,tamanho));

}

int negativosArranjo(float vetor[], int tamanho){
    int negativos = 0;
    for(int i=0; i< tamanho; i++) if(vetor[i]<0) negativos++;
    return negativos;
}