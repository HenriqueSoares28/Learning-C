int main(){
    system("cls");
    float vetor[] = {42, 79, -42, 226, 2345, -5243, -2345, 55, 2345 , -245};
    int tamanho = sizeof(vetor)/sizeof(vetor[0]);
    printf("\nA quantidade de numeros negativos no vetor e: %i", calcularNegativos(vetor, tamanho));
    printf("\n\n");
    
}

int calcularNegativos(float vetor[], int tamanho){
    int numerosNegativos=0;
    for(int i=0; i < tamanho; i++){
        if(vetor[i]< 0) numerosNegativos++;
    }
    return numerosNegativos;
}