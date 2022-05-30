int main(){
    system("cls");
    int termoFib = calcTermoFib(9);
    printf("%d\n", termoFib);
}

int calcTermoFib(int termo){
    int termoFib;
    if(termo <= 2) termoFib = 1;
    else termoFib = calcTermoFib(termo-1) + calcTermoFib(termo-2);
}