#include <stdlib.h>
#include <stdio.h>

int main(){
	FILE* arq;
	int op;
	op = menu();

	switch(op){

		case 0: printf("\nObrigado");
		break;

		case 1: reinicializarAmbiente(arq);
		break;

		case 2: leiaValores(arq);
		break;

		case 3: escreverValores(arq);
		break;

		case 4: escreverOrdmCrescente(arq);
		break;

	}
}

void ordenarCrescente(float a[], int tam){
    float aux;
    for(int j=0; j< tam; j++){
        for(int i=0; i< tam-1-j; i++){
            if(a[i]>a[i+i]){
            aux = a[i];
            a[i] = a[i+i];
            a[i+i] = aux;
            }
        }
    }
    
}