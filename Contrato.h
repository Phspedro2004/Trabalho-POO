#ifndef CONTRATO_H_INCLUDED
#define CONTRATO_H_INCLUDED


#include "Trabalhador.h"
#include "ListaTrabalhadores.h"
#include "Data.h"
using namespace std;

class Contrato{
    public:

        void RealizarContrato(int Contratado, Data DataContrato, ListaTrabalhadores Lista,int valor);

};




#endif // CONTRATO_H_INCLUDED
