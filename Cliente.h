#ifndef CLIENTE_H_INCLUDED
#define CLIENTE_H_INCLUDED

#include "Data.h"
using namespace std;

class Cliente : public Pessoa {
    private:
        Contrato novoContrato;
    public:
        Cliente();
        Cliente(int idade, string nome, string cpf, string contato);

        void contratar(Data DataContratar, int Contratado, ListaTrabalhadores Lista);
        void verLista(ListaTrabalhadores Lista);

};


#endif // CLIENTE_H_INCLUDED
