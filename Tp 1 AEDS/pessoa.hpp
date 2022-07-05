#include <iostream>
#include <string.h>
#include "data.hpp"

using namespace std;

//int PesCountObjects = 0;

#ifndef PESSOA_HPP
#define PESSOA_HPP

class Pessoa{
    private: 
        string nome;
        Data* dataNascimento;
    public:
        // Constructor
        Pessoa(int dia=0, int mes=0, int ano=0, string nome="");
        // Destructor
        ~Pessoa();
        // Getters
        string getNome();
        Data* getDataNascimento();
        // Setters
        void setNome(string nome);
        bool setDataNascimento(int dia, int mes, int ano);
        void setPessoa(string nome, Data* dataNascimento);
        // Others
        virtual void lePessoa();
        virtual void escrevePessoa();
        bool chaveMes(int chave);
        //virtual
        virtual string origem();
};



Pessoa::Pessoa(int dia, int mes, int ano, string nome){
    //PesCountObjects++;
    this->nome = nome;
    this->dataNascimento = new Data(dia, mes, ano);
}

Pessoa::~Pessoa(){
    //PesCountObjects--;
}

// Getters
string Pessoa::getNome(){
    return this->nome;
}

Data* Pessoa::getDataNascimento(){
    return this->dataNascimento;
}


// Setters
void Pessoa::setNome(string nome){
    this->nome = nome;
}

bool Pessoa::setDataNascimento(int dia, int mes, int ano){
    this->dataNascimento->setData(dia, mes, ano);
}

void Pessoa::setPessoa(string nome, Data* dataNascimento){
    this->setNome(nome);
    this->setDataNascimento(dataNascimento->getDia(), dataNascimento->getMes(), dataNascimento->getAno());
}

void Pessoa::lePessoa(){
    string nome;
    Data* dataNascimento;
    dataNascimento = new Data();
    cout << "Digite o nome: ";
    fflush(stdin);
    getline(cin,nome);
    dataNascimento->leData();
    this->setPessoa(nome, dataNascimento);
}

void Pessoa::escrevePessoa(){
    cout << endl << "Nome: " << this->getNome() << endl;
    cout << "Data de nascimento: " ;
    this->getDataNascimento()->escreverData();

}

bool Pessoa::chaveMes(int chave){
    bool valido = false;
    if(this->getDataNascimento()->getMes() == chave) valido = true;
    return valido;
}

//virtual 



//int pessoaCountObjects() {return PesCountObjects;}

#endif