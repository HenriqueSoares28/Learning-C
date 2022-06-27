#include <iostream>
#include "data.hpp"

#define MAX 1000

using namespace std;

Data* data[MAX];

int menu();
void seletorMenu();

int main(){
    seletorMenu();
}

int menu(){
    system("cls");
    int num;
    cout << "************************************" << endl;
    cout << "0 - Sair" << endl;
    cout << "1 - Cadastrar data" << endl;
    cout << "2 - Listar data" << endl;
    cout << "3 - Pesquisar data por um mes chave" << endl;
    cout << "************************************" << endl << endl;
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
                data[index] = new Data();   
                data[index]->Data::leData();
                index++;
                break;
            case 2:
                if(index > 0){
                    for (int i = 0; i < index; i++){
                        data[i]->Data::escreverData();
                        
                    } 
                }else cout << "Nenhuma data cadastrada." << endl;
                break;
            case 3:
                if(index > 0){
                    cout << "Digite o mes que voce quer pesquisar: ";
                    cin >> chave_mes;
                    for (int i = 0; i < index; i++){
                        if (data[i]->Data::chaveMes(chave_mes)){
                            data[i]->Data::escreverData();
                        }
                    }
                }else cout << "Nenhuma data cadastrada." << endl;
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

    //delete datas;
    for (int i = 0; i < index; i++){
        delete(data[i]);
    }

    //instancias da classe remancentes;
    int countDatas = dataCountObjects();
    if(countDatas == 0) cout << "Programa finalizado com sucesso" << endl;
    else cout << "Programa finalizado com erro" << endl;
}