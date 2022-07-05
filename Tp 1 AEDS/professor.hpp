#include "pessoa.hpp"

#ifndef PROFESSOR_HPP
#define PROFESSOR_HPP

class Professor : public Pessoa{
    private:
        string departamento;
    public:
        // Constructor
        Professor(int dia=0, int mes=0, int ano=0, string nome="", string depto="");
        // Destructor
        ~Professor();
        // Getters
        string getDepto() const;
        // Setters
        void setDepto(string depto);
        void setProfessor(Pessoa pessoa, string depto);
        // Others
        void lePessoa();
        void escrevePessoa();
        string origem(); 
};



//constructor
Professor::Professor(int dia, int mes, int ano, string nome, string depto) : Pessoa(dia, mes, ano, nome){
    
    this->setDepto(depto);
}

//destructor
Professor::~Professor(){

}

//getters
string Professor::getDepto() const{
    return this->departamento;
}


//setters
void Professor::setDepto(string depto){
    this->departamento = depto;
}

void Professor::setProfessor(Pessoa pessoa, string depto){
    this->setPessoa(pessoa.getNome(), pessoa.getDataNascimento());
    this->setDepto(depto);
}

//others
void Professor::lePessoa(){
    Pessoa pessoa;
    string depto;
    pessoa.lePessoa();
    cout << "Digite o departamento: ";
    fflush(stdin);
    getline(cin, depto);
    this->setProfessor(pessoa, depto);
}

void Professor::escrevePessoa() {
    Pessoa::escrevePessoa();
    cout << "Departamento: " << this->origem() << endl;
}

string Professor::origem() {
    return this->departamento;
}


#endif