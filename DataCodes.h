#ifndef DATACODES_H_INCLUDED
#define DATACODES_H_INCLUDED

#include "Data.h"


string Data::getData() const
{
    string data = dia + "/" + mes + "/" + ano;
    return data;
}

void Data::setData(const int &Vdia,const int &Vmes,const int &Vano){

    dia = Vdia;
    mes = Vmes;
    ano = Vano;


}



#endif // DATACODES_H_INCLUDED
