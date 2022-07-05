#include "pessoa.hpp"

class Aluno : public Pessoa{
    private:
        string curso;
    public: 
        // Constructor
        Aluno(string nome="", Data dataNascimento=Data(), string curso="");
        // Destructor
        ~Aluno();
        // Getters
        string getCurso() const;
        // Setters
        void setCurso(string curso);
        void setAluno(string nome, Data dataNascimento, string curso);
        // Others
        void leAluno();
        void escreveAluno() const;
        string origem(); 
};

//constructor
Aluno::Aluno(string nome, Data dataNascimento, string curso){
    this->setPessoa(nome, dataNascimento);
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


string Aluno::origem(){
    return this->curso;
}