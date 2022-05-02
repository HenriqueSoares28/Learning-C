#include <stdio.h>

int main(){
    system("cls");
    float a = 11, b = 102, resultado=0;
    for (int i = 1; i <= 10; i++){
        if (i%2==1){
            resultado += a/b;
        }else{
            resultado += b/a;
        }
        a++; b++;
    }
    printf("resultado: %f\n", resultado);
}