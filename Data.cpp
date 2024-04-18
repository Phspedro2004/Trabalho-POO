#include "Data.h"

int Data::getDia()
{
    return dia;
}
int Data::getMes()
{
    return mes;
}
int Data::getAno()
{
    return ano;
}
int Data::getData(){

    return dia << mes << ano;
}
void Data::setData( int &Vdia, int &Vmes, int &Vano){

    dia = Vdia;
    mes = Vmes;
    ano = Vano;
}

void Data::imprimir() {
  cout << "\n Data:\t" << this->getDia() << "/" << this-> getMes() << "/" << this-> getAno();
}

Data::Data() {}
Data::Data(int dia, int mes, int ano) :   dia(dia), mes(mes), ano(ano) {}
