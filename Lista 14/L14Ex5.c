#define TAM_MAX 5

int main(){
    int c =0;
    char senha[30];
    gets(senha);
    while(senha[c] != '\0'){
        c++;
    }
    printf("\nO tamanho da senha e: %i", c);
}

