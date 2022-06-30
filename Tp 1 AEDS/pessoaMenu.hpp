#include <iostream>
#include "pessoa.hpp"

#define MAX 1000

using namespace std;

Pessoa* pessoa[MAX];

int menu(){
    system("cls");
    int num;
    cout << "**************************************" << endl;
    cout << "0 - Sair" << endl;
    cout << "1 - Cadastrar pessoa" << endl;
    cout << "2 - Listar todas as pessoas cadastradas" << endl;
    cout << "3 - Pesquisar aniversariante do mes" << endl;
    cout << "**************************************" << endl << endl;
    cout << "Digite a opacao: ";
    cin >> num;
    return num;
}

void seletorMenu(){
    int opc,
        chave_mes,
        index = 0;
    bool flag = true;
    char cont;
    do{
        opc = menu();
        switch(opc){
            case 0:
                flag = false;
                break;
            case 1:
                pessoa[index] = new Pessoa();   
                pessoa[index]->Pessoa::lePessoa();
                index++;
                break;
            case 2:
                if(index > 0){
                    for (int i = 0; i < index; i++){
                        pessoa[i]->Pessoa::escrevePessoa();
                        
                    } 
                }else cout << "Nenhuma pessoa cadastrada." << endl;
                break;
            case 3:
                if(index > 0){
                    cout << "Digite o mes que voce quer pesquisar: ";
                    cin >> chave_mes;
                    for (int i = 0; i < index; i++){
                        if (pessoa[i]->Pessoa::chaveMes(chave_mes)) pessoa[i]->Pessoa::escrevePessoa();
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
    for (int i = 0; i < index; i++){
        delete(pessoa[i]);
    }

    
    //instancias da classe remancentesP
    int countpessoas = pessoaCountObjects();
    if(countpessoas == 0) cout << "Programa finalizado com sucesso" << endl;
    else cout << "Programa finalizado com erro" << endl;
    
}