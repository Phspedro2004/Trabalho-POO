#ifndef SISTEMA_H_INCLUDED
#define SISTEMA_H_INCLUDED


#include "ListaTrabalhadores.h"


using namespace std;
class Sistema{
    private:
        int Clientes;
        ListaTrabalhadores Trabalhadores;
    public:
        ListaTrabalhadores getTrabalhadores();


};


#endif // SISTEMA_H_INCLUDED
