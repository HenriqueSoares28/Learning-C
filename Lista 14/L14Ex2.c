int main(){
    system("cls");
    int a = 7;
    int b = 2;
    int x = funcao(a,&b);
    printf("\n%i",x);
    printf("\n%i",b);
}

int funcao(int a, int* b){
    int mult = a**b;
    *b = *b * 2;
    return mult;
}