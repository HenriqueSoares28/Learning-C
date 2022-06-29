

#include <iostream>
#include "data.hpp"

class Pessoa: public Data{
    private: 
        string nome;
        Data dataNascimento;
    public:
        // Constructor
        Pessoa(string nome, Data dataNascimento);
        // Destructor
        ~Pessoa();
        // Getters
        string getNome();
        Data getDataNascimento();
        // Setters
        void setNome(string nome);
        bool setDataNascimento(int dia, int mes, int ano);
        void setPessoa(string nome, Data dataNascimento);
        // Others
        void lePessoa();
        void escrevePessoa();
};

Pessoa::Pessoa(string nome, Data dataNascimento){
    this->nome = nome;
    this->dataNascimento = dataNascimento;
}

Pessoa::~Pessoa(){
    // Destructor
}

// Getters
string Pessoa::getNome(){
    return this->nome;
}

Data Pessoa::getDataNascimento(){
    return this->dataNascimento;
}


// Setters
void Pessoa::setNome(string nome){
    this->nome = nome;
}

bool Pessoa::setDataNascimento(int dia, int mes, int ano){
    this->dataNascimento = setData(dia, mes, ano);
}

void Pessoa::setPessoa(string nome, Data dataNascimento){
    this->setNome(nome);
    this->setDataNascimento(dataNascimento.getDia(), dataNascimento.getMes(), dataNascimento.getAno());
}

void Pessoa::lePessoa(){
    string nome;
    Data dataNascimento;
    cout << "Digite o nome: ";
    cin >> nome;
    dataNascimento.leData();
    this->setPessoa(nome, dataNascimento);
}

void Pessoa::escrevePessoa(){
    cout << "Nome: " << this->getNome() << endl;
    cout << "Data de nascimento: ";
    this->getDataNascimento().escreverData();
}