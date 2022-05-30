#include <stdio.h> 
#define LIN 3
#define COL 2

//Aula sobre arranjos bidimensionais

void escrevaMatriz(float M[][2]) //preciso especificar a quantidade de colunas
{
    for(int i = 0; i < LIN; i++)
    {
        for(int j = 0; j < COL; j++)
        {
            printf("\n t%7.1f", M[i][j]);
        }
        printf("\n");
    }
}

//para cada valor de i, o j varia na sua totalidade

void leiaMatriz(float M[][COL])
{
    for(int i = 0; i < LIN; i++)
    {
        for(int j = 0; j < COL; j++)
        {
            printf("\n Digite valor: ");
            scanf("%f", &M[i][j]);
        }
    }
}

void somaMatriz(float A[][COL], float B[][COL], float C[][COL])
{
    // M3 -> A, M1 -> B, M2 -> C
    for(int i = 0; i < LIN; i++)
    {
        for(int j = 0; j < COL; j++)
        {
            A[i][j] = B[i][j] + C[i][j];
        }
    }
}

int main()
{
    printf("\n Arranjos bidimensionais");

    //3 linhas e 2 colunas

    float M1[LIN][COL] = {{1,2} , {3,4} , {5,6}};
    escrevaMatriz(M1);

    float M2[LIN][COL];
    leiaMatriz(M2);
    escrevaMatriz(M2);

     float M3[LIN][COL];
     somaMatriz(M3, M1, M2); //receber as 3 matrizes de forma que a primeira receba a soma
     escrevaMatriz(M3);

    return 0;
}