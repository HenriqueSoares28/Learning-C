#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int countObjects = 0;

class Data{
    private:
        int dia;
        int mes;
        int ano;
    public:
        // Constructor
        Data(int dia, int mes, int ano);
        // Destructor
        ~Data();
        // Getters
        int getDia();
        int getMes();
        int getAno();
        // Setters
        bool setDia(int dia);
        bool setMes(int mes);
        void setAno(int ano);
        bool setData(int dia, int mes, int ano);
        // Others
        void leData();
        bool validadeData();
        string mesExtenso();
        void escreverData();
        bool chaveMes(int mes);
        
};

//constructor
Data::Data(int dia=0, int mes=0, int ano=0){
    countObjects ++;
    this->dia = dia;
    this->mes = mes;
    this->ano = ano;
}
//destructor
Data::~Data(){
    countObjects--;
}

//getters
int Data::getDia(){
    return this->dia;
}
int Data::getMes(){
    return this->mes;
}
int Data::getAno(){
    return this->ano;
}

//setters
bool Data::setDia(int dia){
    bool valido = false;
    if (dia > 0 && dia <= 31){
        this->dia = dia;
        valido = true;
    }
    return valido;
}

bool Data::setMes(int mes){
    bool valido = false;
    if (mes > 0 && mes <= 12){
        this->mes = mes;
        valido = true;
    }
    return valido;
}
void Data::setAno(int ano){
    this->ano = ano;
}

bool Data::setData(int dia, int mes, int ano){
    bool valido = false;
    if(this->setDia(dia) && this->setMes(mes)) valido = true;
    this->setAno(ano);
    return valido;
}

void Data::leData(){
    int dia,
        mes, 
        ano;
    bool valido = false;
    do{
        cout << "Digite o dia: ";
        cin >> dia;
        cout << "Digite o mes: ";
        cin >> mes;
        cout << "Digite o ano: ";
        cin >> ano;
        if(this->setData(dia, mes, ano)) {
            valido = true;
            cout << "Data valida!" << endl;
        }else cout << "Data invalida, Digite novamente" << endl;
    }while(!valido);
}

bool Data::validadeData(){
    bool valido = false;
    if((getMes() > 0 && getMes() <=12) && (getDia() > 0 && getDia() <= 31)) valido = true;
    return valido;
}

string Data::mesExtenso(){
    string mesExtenso[12] = {"janeiro",
                             "fevereiro",
                             "marco",
                             "abril",
                             "maio",
                             "junho",
                             "julho",
                             "agosto",
                             "setembro",
                             "outubro",
                             "novembro",
                             "dezembro"};

    return mesExtenso[getMes()-1];
}

void Data::escreverData(){
    cout << this->getDia() << "/" << this->mesExtenso() << "/" << this->getAno() << endl;
}

bool Data::chaveMes(int mes){
    bool valido = false;
    if (mes == getMes()) valido = true;
    return valido;
}


int dataCountObjects() {return countObjects;}


//menu
#define MAX 1000
Data* data[MAX];


int menuData(){
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

void seletorMenuData(){
    int opc,
        chave_mes,
        index = 0;
    bool flag = true;
    char cont;
    do{
        opc = menuData();
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

