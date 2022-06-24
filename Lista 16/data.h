#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <iostream>
#include <string>

using std::string; using std::copy;


class Data{
    private:
        int dia,
            mes,
            ano;

    public:

        int getDia(){
            return this->dia;
        }

        void setDia(int d){
            this->dia = d;
        }   

        int getMes(){
            return this->mes;
        }
        
        void setMes(int mes){
            this->mes = mes;
        }

        int getAno(){
            return this->ano;
        }

        void setAno(int ano){
            this->ano = ano;
        }

        void setData(int dia, int mes, int ano){
            setDia(dia);
            setMes(mes);
            setAno(ano);
        }
};

void leData(Data d){
    int dia, mes, ano;
    fflush(stdin);
    puts("Digite a data: (dd/mm/aaaa)");
    scanf("%i/%i/%i", dia, mes, ano);
    d.setData(dia, mes, ano);
}

bool dataValid(Data d){
    bool valid;
    valid = (d.getDia() > 0 && d.getDia() < 32) && (d.getMes() > 0 && d.getMes() < 13);
    return valid;
}

char* mesExtenso(Data d){
    char* meses[12] = {"Janeiro",
                        "Fevereiro", 
                        "Março", 
                        "Abril", 
                        "Maio", 
                        "Junho", 
                        "Julho", 
                        "Agosto", 
                        "Setembro", 
                        "Outubro", 
                        "Novembro", 
                        "Dezembro"};

    return meses[d.getMes() - 1];
}

void escreverData(Data d){
    printf("%i de %s de %i\n", d.getDia(), mesExtenso(d), d.getAno());
}

bool pesquisarData(Data* d, int mes, bool mostrar){ //bool mostrar, mostra as datas compatíveis;
    bool data = false;
    for(int i = 0; i < mes; i++){
        if(dataValid(d[i])==mes){
            data = true;
            if(mostrar){
                escreverData(d[i]);
            }
        }
    }
    return data;
}
    



