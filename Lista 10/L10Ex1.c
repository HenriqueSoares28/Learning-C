int main(){
    int fat = calcularFatorial(5);
    printf("%d\n", fat);
}

int calcularFatorial(int num){
    int fat; //Fatorial inicial ou fatorial de 0;
    if(num <= 1) {
        fat = 1;
    }else{
        fat = num * calcularFatorial(num-1);
    }

    return fat;
}