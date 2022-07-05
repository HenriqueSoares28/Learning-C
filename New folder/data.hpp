#include <iostream>

using namespace std;

//int countObjects = 0;

#ifndef DATA_HPP
#define DATA_HPP

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
    //countObjects ++;
    this->dia = dia;
    this->mes = mes;
    this->ano = ano;
}
//destructor
Data::~Data(){
    //countObjects--;
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
    if (mes == this->getMes()) valido = true;
    return valido;
}

//int dataCountObjects() {return countObjects;}

#endif