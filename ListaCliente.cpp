#include "ListaCliente.h"

void ListaClientes::AddCliente(Cliente novo){

        clientes[Ocupado] = novo;
        Ocupado++;
}

void ListaClientes::verClientes(){

    for(int i = 0; i < Ocupado; i++){
        cout << "Cliente " << i << ".-----------------------------------\n";
        clientes[i].imprimirPessoa();
        cout << "\n";
    }
}


ListaClientes::ListaClientes() {}
ListaClientes::ListaClientes(int Ocupado) : Ocupado(Ocupado) {}
