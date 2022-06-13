#include <stdbool.h>

int main(){

    if(ePrimo(5)) printf("\nPrimo")
}

bool ePrimo(int num){  
    bool primo = true;
    for (int i=2; i<=(num/2); i++){
        if (num%i == 0) primo = false;
    }
    return primo;
}