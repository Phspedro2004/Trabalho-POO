#ifndef SISTEMA_H_INCLUDED
#define SISTEMA_H_INCLUDED


#include "ListaTrabalhadores.h"


using namespace std;
class Sistema{
    private:
        ListaTrabalhadores Trabalhadores;
        ListaClientes Clientes;
    public:
        ListaTrabalhadores getTrabalhadores();
        ListaClientes getClientes();


};


#endif // SISTEMA_H_INCLUDED
