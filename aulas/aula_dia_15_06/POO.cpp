#include <stdio.h>
#include <stdlib.h>
#include <iostream>


class Data{
    private:
        int dia;
        int mes;
        int ano;

    public:

        int getDia(){
            return dia;
        }
        int getMes(){
            return mes;
        }
        int getAno(){
            return ano;
        }
        void setDia(int d){
            dia=d;
        }
        void setMes(int m){
            mes=m;
        }
        void setAno(int a){
            ano=a;
        }


        char* mesExtenso(Data d){
            char* mes[]={"janeiro",
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
            return mes[d.mes-1];
        }

        bool dataValid(Data d){
            bool valid = true;
            if(d.dia<1 || d.dia>31){
                valid = false;
            }else if(d.mes<1 || d.mes>12){
                valid = false;
            }else if(d.ano<0){
                valid = false;
            }
            return valid;
        }

        void leData(Data* d){
            do{
                puts("\ndd/mm/aaaa");
                scanf("%d/%d/%d", &d->dia, &d->mes, &d->ano);
                if(!dataValid(*d)){
                    puts("Data inválida");
                }
            }while(dataValid(*d));
        }
};



