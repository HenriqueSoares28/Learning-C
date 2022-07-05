#include "pessoa.hpp"

class Professor : public Pessoa{
    private:
        string departamento;
    private:
        // Constructor
        Professor(string nome="", Data dataNascimento=Data(), string depto="");
        // Destructor
        ~Professor();
        // Getters
        string getDepto() const;
        // Setters
        void setDepto(string depto);
        void setProfessor(string nome, Data dataNascimento, string depto);
        // Others
        void leProfessor();
        void escreveProfessor();
        string origem(); 
};

//constructor
Professor::Professor(string nome, Data dataNascimento, string depto){
    this->setPessoa(nome, dataNascimento);
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

void Professor::setProfessor(string nome, Data dataNascimento, string depto){
    this->setPessoa(nome, dataNascimento);
    this->setDepto(depto);
}

//others
void Professor::leProfessor(){
    this->lePessoa();
    cout << "Digite o departamento: ";
    cin >> this->departamento;
}

void Professor::escreveProfessor() {
    this->escrevePessoa();
    cout << "Departamento: " << this->departamento << endl;
}

string Professor::origem() {
    return this->departamento;
}
