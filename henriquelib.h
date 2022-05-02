#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include <locale.h>
#include <Windows.h>
#include <math.h>

bool continuar(){
    bool continuarBool;
    char continuarChar;
    do
    {        
        printf("\nQuer continuar [S/N] ? ");
        scanf(" %c", &continuarChar);
        continuarChar = toupper(continuarChar);
        if (continuarChar == 'S'){
            continuarBool = false;
            return true; 
        }else if (continuarChar == 'N'){
            continuarBool = false;
            return false;
        }else{
            printf("\nLetra nao reconhecida, digite novamente.");
            continuarBool = true;
        }
    } while (continuarBool);
}


void lerTime(int pessoas){

    int atletico=0,
        cruzeiro=0,
        outro=0,
        numeroalunos = pessoas,
        contador = 0;

    bool escolhaTimeBoll = true;
    
    for (int i = 0; i < numeroalunos; i++){
        contador += 1;
        char opcao;
        do{

            printf("\nAluno %i seu time favorito: \n\tAtletico [A]\n\tCruzeiro [C]\n\tOutro    [O]\nOpcao:", contador);
            scanf(" %c", &opcao);
            opcao = toupper(opcao);
            if (opcao == 'A'){
                atletico += 1;
                escolhaTimeBoll = false;
            }else if (opcao == 'C'){
                cruzeiro += 1;
                escolhaTimeBoll = false;
            }else if (opcao == 'O'){
                outro += 1;
                escolhaTimeBoll = false;
            }else{
                printf("\aInvalid command!");
                escolhaTimeBoll = true;
            }
        }while(escolhaTimeBoll);

    }
    float mediaC = ((float)cruzeiro / (float)numeroalunos)*100,
          mediaA = ((float)atletico / (float)numeroalunos)*100,
          mediaO = ((float)outro / (float)numeroalunos)*100;

    

    printf("\nA porcentagem de atleticanos e: %.0f%%", mediaA);
    printf("\nA porcentagem de cruzeirences e: %.0f%%", mediaC);
    printf("\nA porcentagem de outros e: %.0f%%", mediaO);
    
}



/*void pa(int primeiroTermo, int razao){

    int primeiroTermo = primeiroTermo;
    int razao = razao;

    for(int i=0; i < 20; i++){
        printf("%i ", i); 
    }
}*/


void mediaTurma(){
    bool flag;
    float nota,
          notas = 0,
          media,
          maiorNota = 0;
    int contador = 0,
        contadorMelhorAluno = 0;

    do
    {
        printf("\n\nEscrava a nota do %i aluno [-1 para sair]: ", contador);
        scanf("%f", &nota);
        if (nota == -1){
            flag = false;

        }else if (nota < 0){
            printf("Error");
            flag = true;

        }else if (nota >=0){
            printf("\nnota computada.");
            notas += nota;
            contador ++;
            flag = true;
        }

        if(nota > maiorNota){
            maiorNota = nota;
            contadorMelhorAluno = contador;
        }


    } while (flag);
    media = notas / contador;
    printf("\nA media das notas e: %.1f", media);
    printf("\nO aluno %i tirou a nota %.1f e foi a maior nota", contadorMelhorAluno, maiorNota);
}


void eleicaoDA(){
    int chapa1=0,
        chapa2=0,
        nulo=0,
        cont=0,
        voto;

    bool erro;
    do
    {
        cont ++;
        do
        {
            printf("Votacao para a chapa do DA:\n\t0 -> Sair do programa\n\t1 -> Chapa 1\n\t2 -> Chapa 2\n\t3 -> Voto em branco/nulo\n");
            printf("\n%i voto: ", cont);
            scanf(" %i", &voto);
            if(voto > 3 || voto < 0){
                printf("\nVoto invalido");
                erro = true;
            }else{
                erro=false;
            }
        } while (erro);
        erro = true;
        if(voto == 0){
            printf("\nPrograma finalizado.");
            erro = false;
        }else if (voto == 1){
            chapa1 ++;
        }else if (voto == 2){
            chapa2 ++;
        }else if (voto == 3){
            nulo ++;
        }

    
    } while (erro);
    printf("\nA chapa 1 teve %i votos", chapa1);
    printf("\nA chapa 2 teve %i votos", chapa2);
    printf("\n%i votos foram nulos", nulo);
    if (chapa1 > chapa2){
        printf("\nA Chapa 1 foi a vencedora.");
    }else if(chapa2 < chapa1){
        printf("\nA Chapa 2 foi a vencedora.");
    }else if (chapa1 == chapa2){
        printf("\nAs duas chapas tiveram o mesmo numero de votos.");
    }

}

void perfilTurma(){
    char genero,
         continuar;
    int idade,
        homem=0,
        mulher=0,
        somaAlunos=0,
        count=0;
    bool erro;
    float porcentagemHomem,
          porcentagemMulher;
    do
    {   
        count ++;
        do
        {
            printf("\nDigite seu genero [m/f]: ");
            scanf(" %c", &genero);
            printf("\nDigite seu idade: ");
            scanf(" %i", &idade);
            genero = tolower(genero);
            if ((genero == 'm' || genero == 'f') && (idade > 0 && idade <=90))
            {
                printf("\nAluno cadastrado");
                erro= false;
            }else{
                printf("\nCadastro invalido. Tente novamente.");
                erro= true;
            }
            
            

        } while (erro);
        if (genero == 'm') {
            homem ++;
            somaAlunos ++;
        }else if (genero == 'f') {
            mulher ++;
            somaAlunos ++;
        }
        erro = true;
        printf("\nQuer continuar? [s/n]");
        scanf(" %c", &continuar);
        continuar = toupper(continuar);
        if (continuar == 'N'){
            erro = false;
        }
        

    } while (erro);
    porcentagemHomem = (float)homem / (float)somaAlunos *100;
    porcentagemMulher = (float)mulher / (float)somaAlunos *100;

    printf("\n\nA porcentagem de homens na turma e %.0f%%\n",porcentagemHomem);
    printf("A porcentagem de mulheres na turma e %.0f%%\n",porcentagemMulher);
    printf("O total de alunos lido foi: %i", count);
    
}


void funcaoL6Ex1(){
    int h,
        dividendo=100;

    float num=0,
          somaNum=0;

    printf("\nEscreva o numero de termos: ");
    scanf(" %i", &h);
    
    for (int i=0; i <= h; i++){
        num = 1 / (float)dividendo;
        printf("\n%f", num);
        dividendo -= 3;
        somaNum += num;

    }
    printf("\nA soma dos numeros e: %f\n", somaNum);
}

void funcaoL6Ex2(){
    int h,
        dividendo=100,
        divisor=1;

    float num=0;
    
    printf("\nEscreva o numero de termos: ");
    scanf("%d", &h);
    for (int i = 1; i <= h; i++)
    {
        if(i % 2 == 1){
            num = (float)divisor/(float)dividendo;
        }else if(i % 2 == 0){
            num = (float)dividendo/ (float)divisor;
        }
        printf("\n%f", num);
        divisor ++;
        dividendo -= 3;
    }
    

}

void termosPG(int razao, int primeiroTermo, int numeroTermos){
    int numero=primeiroTermo, pares=0;

    
    for (int i = 0; i < numeroTermos; i++){
        if (numero% 2 == 0){
            pares++;
        }
        
        numero = primeiroTermo * pow(razao, i);
        printf("%i ", numero);
    }
    printf("Quantidade de numeros pares: %d", pares);
}

void fibonacci(int numeroTermos){
    int a=1,
        b=1,
        soma=0;
    printf("%i ", a);
    for (int i = 0; i < numeroTermos; i++)
    {
        printf("%i ", b);
        soma = a+b;
        a = b;
        b = soma;

    }
    
}

int exponencial(int base, int expoente){
    int resultado = 1;
    if(expoente==0){
        resultado = 1;
    }else{
        for (int i = 0; i < expoente; i++){
            resultado *= base;
            
        }
    }
    return resultado;
}

int fatorial(int numero){
    int num = numero,
        count = numero;
    int resultado =1;
    for (int i = 0; i < count; i++){
        resultado *= num;
        num --;
    }
    
    return resultado;
}

int termosPA(int razao, int primeiroTermo, int numeroTermos){
    int numero=primeiroTermo;
    
    for (int i = 0; i < numeroTermos; i++){
        printf("%i ", numero);
        numero = primeiroTermo += razao;
    }
    return 0;
}

