#include <stdbool.h>
#include <C:\Users\eldut\OneDrive\Puc\AEDS 1\C\henriquelib.h>

int main(){
    system("cls");
    int acimaMedia=0, i=0;
    float nota, somaNotas=0, maiorNota, menorNota;
    bool erro;

    do{
        printf("Digite a nota do 1° aluno ");
        scanf("%f", &nota);
        if(nota>=0 && nota<=20){
            erro=false;
        }else{
            printf("\nValor invalido, digite novamente;");
            erro=true;
        }
        if (nota >= 12)
        {
            acimaMedia ++;
        }
    } while (erro);
    maiorNota= nota;
    menorNota= nota;

    while(continuar()){
        i++;
        do{
            printf("\nDigite a nota do %d° aluno: ", i+1);
            scanf("%f", &nota);    
            if(nota>=0 && nota<=20){
                erro=false;
            }else{
                printf("\nValor invalido, digite novamente;");
                erro=true;
            }
        } while (erro);
        
        somaNotas += nota;

        if (nota >= 12)
        {
            acimaMedia ++;
        }

        if (nota > maiorNota){
            maiorNota = nota;
        }
        if (nota < menorNota){
            menorNota = nota;
        }
    }
    printf("\nNumero de alunos acima da media: %d", acimaMedia);
    printf("\nMedia das notas da turma: %.1f", somaNotas/i);
    printf("\nA maior nota foi %.1f", maiorNota);
    printf("\nA menor nota foi %.1f", menorNota);

}