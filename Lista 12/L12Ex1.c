#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

void inicializarAmbiente(FILE* arq);
int respostaMenu();
void lerTime(FILE* arq);
void escreverTimes(FILE* arq);

int main(){
    system("cls");
    int resposta;
    FILE* arq = "arquivo.dtt";
    do{
        resposta = respostaMenu();
        switch(resposta){
            case 1: inicializarAmbiente(arq); break;
            case 2: lerTime(arq); break;
            case 3: escreverTimes(arq); break;
            case 4: percentualTime(arq); break;
        }
    }while (resposta != 0);
    system("cls");
    

}

void printCabecalho(){
    printf("\n\n\n\tMenu\n\t0 - Sair do programa\n\t1 - Inicializar o ambiente\n\t2 - Ler time do coracao\n\t3 - Escrever os times do coracao\n\t4 - Percentual dos times");
}

int respostaMenu(){
    int resposta;
    bool erro;
    do
    {
        printCabecalho();
        printf("\n\nDigite sua resposta: ");
        scanf("%d",&resposta);
        erro = !(resposta >=0 && resposta <= 4);
    } while (erro);
    

    return resposta;
}

void inicializarAmbiente(FILE* arq){
    arq = fopen("arquivo.dat", "w");
    fclose(arq);
}

void lerTime(FILE* arq){
    char time;
    bool erro = true;
    if(arq==NULL){
        printf("\nArquivo NULL\n");
        printf("\nCriando arquivo...");
        arq = fopen("arquivo.dat", "w");
        fclose(arq);
    }
    arq = fopen("arquivo.dat", "a");
    do{
        printf("\nDigite seu time: [A, C, O]\nP - para\t");
        scanf(" %c",&time);
        time = toupper(time);
        if(time != 'P') fprintf(arq, "%c\n", time);
        else erro = false;
    } while (erro);
    fclose(arq);
}

void escreverTimes(FILE* arq){
    char c;
    arq = fopen("arquivo.dat", "r");
    do{
        fscanf(arq, "%c", &c);
        printf("%c", c);
    
    } while (!feof(arq)); 
}

void percentualTime(FILE* arq){
    int cont=0, c=0, a=0, o=0;
    float porC, porA, porO;
    char time;
    arq = fopen("arquivo.dat", "r");
    while(!feof(arq)){
        fscanf(arq, "%c", &time);
        switch(time){
            case 'C': 
            c++;
            cont++;
            break;
            case 'A': 
            a++;
            cont++;
            break;
            case 'O': 
            o++;
            cont++;  
            break;
        }
        
    }
    porA = (float)a/(float)cont*100;
    porC = (float)c/(float)cont*100;
    porO = (float)o/(float)cont*100;
    printf("\n\tAtleticanos: %.0f%%", porA);
    printf("\n\tCruzeirences: %.0f%%", porC);
    printf("\n\tOutros: %.0f%%", porO);
}
