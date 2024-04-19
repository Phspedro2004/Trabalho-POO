#include "Cliente.h"
#include "Data.h"
#include "Contrato.h"

void Cliente::contratar(Data DataContratar, int Contratado, ListaTrabalhadores Lista,int valor){

    novoContrato.RealizarContrato(Contratado,DataContratar,Lista, valor);

}

void Cliente::verLista(ListaTrabalhadores Lista){

    Lista.verTrabalhadores();
}

Cliente::Cliente() {}
Cliente::Cliente(int idade, string nome, string cpf, string contato) : Pessoa(idade,nome,cpf,contato) {}
