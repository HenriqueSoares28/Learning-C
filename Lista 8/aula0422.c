
void saudacao();
int soma();

int main(){
    system("cls");
    saudacao();
    soma(2, 3);
}

void saudacao(){
    printf("\nHello world");
    printf("\nSoma de 3 + 2 = %i", soma(3, 2));
    return;
}
int soma(int v1, int v2){
    int soma = v1 + v2;
    return soma;
}