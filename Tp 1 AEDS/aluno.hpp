#include "pessoa.hpp"

#ifndef ALUNO_HPP
#define ALUNO_HPP 

class Aluno: public Pessoa{
    private:
        string curso;
    public: 
        // Constructor
        Aluno(int dia=0, int mes=0, int ano=0, string nome="", string curso="");
        // Destructor
        ~Aluno();
        // Getters
        string getCurso() const;
        // Setters
        void setCurso(string curso);
        void setAluno(Pessoa pessoa, string curso);
        // Others
        void lePessoa();
        void escrevePessoa();
        string origem(); 
};



//constructor
Aluno::Aluno(int dia, int mes, int ano, string nome, string curso) : Pessoa(dia, mes, ano, nome){

    this->setCurso(curso);
}

//destructor
Aluno::~Aluno(){

}

//getters
string Aluno::getCurso() const{
    return this->curso;
}


//setters

void Aluno::setCurso(string curso){
    this->curso = curso;
}

void Aluno::setAluno(Pessoa pessoa, string curso){
    this->setPessoa(pessoa.getNome(), pessoa.getDataNascimento());
    this->setCurso(curso);
}

//Others
void Aluno::lePessoa(){
    Pessoa pessoa;
    string curso;
    pessoa.lePessoa();
    cout << "Digite o curso: ";
    fflush(stdin);
    getline(cin, curso);
    this->setAluno(pessoa, curso);
}

void Aluno::escrevePessoa() {
    Pessoa::escrevePessoa();
    cout << "Curso: " << this->origem() << endl;
}


string Aluno::origem(){
    return this->curso;
}


#endif