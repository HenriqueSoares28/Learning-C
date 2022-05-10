int main(){
    system("cls");
    int num;
    printf("\nDigite um numero: ");
    scanf("%d",&num);
    printf("\nO fatorial do numero %d e %d\n",num, fatorial(num));
}

int fatorial(int num){
    int fat;
    if (num<=1) fat = 1;
    else {
        fat = num * fatorial(num-1);
    }
    return fat;
}