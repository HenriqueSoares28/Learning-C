#include <iostream>
#include "aluno.hpp"
#include "professor.hpp"

#define MAX 1000

using namespace std;

Aluno* aluno[MAX];
Professor* professor[MAX];

int menu(){
    system("cls");
    int num;
    cout << "********************************************" << endl;
    cout << "**************      MENU      **************" << endl;
    cout << "********************************************" << endl;
    cout << "*                                          *" << endl;
    cout << "* 0 - Sair                                 *" << endl;
    cout << "* 1 - Cadastrar aluno                      *" << endl;
    cout << "* 2 - Cadastrar professor                  *" << endl;
    cout << "* 3 - Listar todas as pessoas cadastradas  *" << endl;
    cout << "* 4 - Pesquisar aniversariante do mes      *" << endl;
    cout << "*                                          *" << endl;
    cout << "********************************************" << endl << endl;
    cout << "Digite a opcao: ";
    cin >> num;
    return num;
}

void seletorMenu(){
    int opc,
        chave_mes,
        indexAluno = 0, 
        indexProfessor = 0;
    bool flag = true;
    char cont;
    do{
        opc = menu();
        switch(opc){
            case 0:
                flag = false;
                break;
            case 1:
                aluno[indexAluno] = new Aluno();   
                aluno[indexAluno]->Aluno::leAluno();
                indexAluno++;
                break;
            case 2:
                // professor[indexProfessor] = new Professor();   
                // professor[indexProfessor]->Professor::leProfessor();
                // indexProfessor++;
                break;
            case 3:
                if(indexAluno > 0 || indexProfessor > 0){
                    for (int i = 0; i < indexAluno; i++){
                        aluno[i]->Aluno::escrevePessoa();
                    } 
                    for (int i = 0; i < indexProfessor; i++){
                        professor[i]->Professor::escrevePessoa();
                    }
                }else cout << "Nenhuma pessoa cadastrada." << endl;
                break;
            case 4:
                if(indexAluno > 0 || indexProfessor > 0){
                    cout << "Digite o mes que voce quer pesquisar: ";
                    cin >> chave_mes;
                    for (int i = 0; i < indexAluno; i++){
                        if (aluno[i]->Pessoa::chaveMes(chave_mes)) aluno[i]->Pessoa::escrevePessoa();
                    }
                    for (int i = 0; i < indexProfessor; i++){
                        if (professor[i]->Pessoa::chaveMes(chave_mes)) professor[i]->Pessoa::escrevePessoa();
                    }
                }else cout << "Nenhuma pessoa cadastrada." << endl;
                break;
            default: cout << "Opcao invalida!" << endl;
        }
        if(flag){
            cout << endl << "Quer continuar [s/n] ? ";
            cin >> cont;
            if (cont == 'n')  flag = false;
            else flag = true;
        }
    }while(flag);

    //delete pessoas;
    // for (int i = 0; i < index; i++){
    //     delete(pessoa[i]);
    // }

    
    //instancias da classe remancentesP
    //int countpessoas = pessoaCountObjects();
    //if(countpessoas == 0) cout << "Programa finalizado com sucesso" << endl;
    //else cout << "Programa finalizado com erro" << endl;
    
}