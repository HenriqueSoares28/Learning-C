int alunosAprovados(const float vetor[], int tam);

int main(){
    system("cls");
    float vetor[] = {20.0, 40.0, 60.0, 100.0, 0.0};
    int tamanho = sizeof(vetor)/sizeof(vetor[0]);
    printf("\nO numero de alunos aprovados foi: %i", alunosAprovados(vetor, tamanho));
}

int alunosAprovados(const float vetor[], int tam){
    int aprovados = 0;
    for(int i=0; i < tam; i++){
        if(vetor[i]>= 60) aprovados ++;
    }return aprovados;
}