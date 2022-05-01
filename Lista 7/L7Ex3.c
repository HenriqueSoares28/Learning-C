#include <stdbool.h>

int main(){
    system("cls");
    int alunos, acimaMedia=0;
    float nota, somaNotas=0, maiorNota, menorNota;
    bool erro;

    printf("Digite o numero de alunos: ");
    scanf("%i", &alunos);

    do{
        printf("Digite a nota do 1° aluno ");
        scanf("%f", &nota);
        if(nota>=0 && nota<=20){
            erro=false;
        }else{
            printf("Valor invalido, digite novamente;");
            erro=true;
        }
    } while (erro);
    maiorNota= nota;
    menorNota= nota;

    for(int i=1; i<alunos; i++){
        do{
            printf("Digite a nota do %d° aluno: ", i+1);
            scanf("%f", &nota);    
            if(nota>=0 && nota<=20){
                erro=false;
            }else{
                printf("Valor invalido, digite novamente;");
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
    printf("\nMedia das notas da turma: %f", somaNotas/alunos);
    printf("\nA maior nota foi %f", maiorNota);
    printf("\nA menor nota foi %f", menorNota);

}