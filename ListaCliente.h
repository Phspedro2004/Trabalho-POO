#ifndef LISTACLIENTE_H_INCLUDED
#define LISTACLIENTE_H_INCLUDED

#include "Endereco.h"
#include "Cliente.h"

using namespace std;
class ListaClientes {
    private:
        int Ocupado;
    public:
        Cliente clientes[100];

        ListaClientes();
        ListaClientes(int Ocupado);

        void verClientes();
        Cliente GetCliente();
        void AddCliente(Cliente ClienteNovo);
};


#endif // LISTACLIENTE_H_INCLUDED
