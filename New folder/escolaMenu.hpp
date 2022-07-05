#include <iostream>
#include "aluno.hpp"
#include "professor.hpp"



#define MAX 1000

using namespace std;

Pessoa* pessoa[MAX];


int menu(){
    system("cls || clear");
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
    cout << "********************************************\n" << endl;
    cout << "Digite a opcao: ";
    cin >> num;
    return num;
}

void seletorMenu(){
    int opc,
        chave_mes,
        index=0;
    bool flag = true;
    char cont;
    do{
        opc = menu();
        switch(opc){
            case 0:
                flag = false;
                break;
            case 1:
                pessoa[index] = new Aluno();   
                pessoa[index]->lePessoa();
                index++;
                break;
            case 2:
                pessoa[index] = new Professor();   
                pessoa[index]->lePessoa();
                index++;
                break;
            case 3:
                if(index > 0){
                    for (int i = 0; i < index; i++){
                        pessoa[i]->escrevePessoa();  
                    }
                }else cout << "Nenhuma pessoa cadastrada." << endl;
                break;
            case 4:
            
                if(index){
                    cout << "Digite o mes que voce quer pesquisar: ";
                    cin >> chave_mes;
                    for (int i = 0; i < index; i++){
                        if (pessoa[i]->chaveMes(chave_mes)) pessoa[i]->escrevePessoa();
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

    for (int i = 0; i < index; i++){
        delete(pessoa[i]);
    }

    
    //Instancias da classe remancentes
    // int countpessoas = pessoaCountObjects();
    // if(countpessoas == 0) cout << "Programa finalizado com sucesso" << endl;
    // else cout << "Programa finalizado com erro" << endl;
    
}